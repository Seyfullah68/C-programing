#include <stdio.h>
#include <stdlib.h>
void gir(int *seri,int uzunluk)
{
    int *son;
    son=seri+uzunluk;
    while(seri<son)
    {
        scanf("%d",seri);
        seri++;
    }
}
int bul(int *dizi,int sayi,int ara)
{
    int x=0;
    int *p;
    p=dizi+sayi-1;
    while(dizi<=p && *dizi != ara)
    {
        dizi++;
        x++;
    }
    if(dizi<=p){
        return x;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int dizi[100];
    int sayi,ara,sonuc;
    printf("dizimiz kac elemanli olacak\n");
    scanf("%d",&sayi);
    printf("dizi sayilarini giriniz\n");
    gir(dizi,sayi);
    printf("aranilan sayi nedir\n");
    scanf("%d",&ara);
    sonuc=bul(dizi,sayi,ara);
    if(sonuc == -1)
    {
        printf("yok");
    }
    else
    {
        printf("%d inci eleman",sonuc+1);
    }

    return 0;
}

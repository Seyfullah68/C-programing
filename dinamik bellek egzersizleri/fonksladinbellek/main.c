#include <stdio.h>
#include <stdlib.h>

void diziyi_olustur(int *x,int a)
{
     printf("sayilarimiz:");
     for(int i=0;i<a;i++)
    {
        x[i]=rand()%100;
        printf("%3d",*(x+i));
    }
}
void diziyi_sirala(int *k,int y)
{
    int tut,i;
    int son=y;
    for(i=0;i<y-1;i++)
    {
        for(int j=0;j<y-i-1;j++)
        {
            if(k[j]>k[j+1])
        {
            tut=k[j];
            k[j]=k[j+1];
            k[j+1]=tut;
        }
        }

    }
    printf("\nDizinin siralanmis hali:");
    for(i=0;i<y;i++)
    {
        printf("%3d",*(k+i));
    }
}
void en_buyuk(int *a,int b)
{
    printf("\nEn buyuk sayimiz: %d",a[b-1]);
}
int main()
{
    int *p,n,i;
    printf("kac adet sayi uretilecek?");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    srand(time(0));
    diziyi_olustur(p,n);
    diziyi_sirala(p,n);
    en_buyuk(p,n);
    free(p);
    return 0;
}

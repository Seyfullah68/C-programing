#include <stdio.h>
#include <stdlib.h>
void degistir(int *a,int *b)
{
    int tut;
    tut=*a;
    *a=*b;
    *b=tut;
}
int main()
{
    int sayi1,sayi2;
    printf("sayilari giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);
    degistir(&sayi1,&sayi2);
    printf("sayilar %d ve %d",sayi1,sayi2);
    return 0;
}

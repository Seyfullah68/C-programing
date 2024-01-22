#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,i,kucuk;
    printf("kac adet sayi olacak?\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    srand(time(0));
    for(i=0;i<n;i++)
    {
        *(p+i)=rand()%100;
    }
    printf("sayilar:\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",*(p+i));
    }
    printf("\nen kucuk:");
    kucuk=*p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)<kucuk)
        {
            kucuk=*(p+i);
        }
    }
    printf(" %d",kucuk);
    return 0;
}

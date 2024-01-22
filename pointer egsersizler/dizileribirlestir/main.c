#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    int a[max];
    int b[max];
    int as,bs;
    int *p,*n;
    int i=0;
    printf("ilk dizi kac elemanli olacak\n");
    scanf("%d",&as);
    for(p=a;p<a+as;p++)
    {
        printf("element %d:",i);
        scanf("%d",p);
        i++;
        printf("\n");
    }
    i=0;
    printf("ikinci dizi kac elemanli olacak\n");
    scanf("%d",&bs);
    for(p=b;p<b+bs;p++)
    {
        printf("element %d:",i);
        scanf("%d",p);
        i++;
        printf("\n");
    }
    printf(" dizi    a:\n");
    for(p=a;p<a+as;p++)
    {
        printf("%2d",*p);
    }
    printf(" \ndizi    b:\n");
    for(p=b;p<b+bs;p++)
    {
        printf("%2d",*p);
    }
    for(p=b,n=a+as;p<b+bs;p++,n++)
    {
        *n=*p;
    }
    printf(" \ndizi    son:\n");
    for(p=a;p<a+bs+as;p++)
    {
        printf("%2d",*p);
    }

    return 0;
}

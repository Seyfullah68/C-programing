#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tut;
    int *p,*k;
    printf("dizi kac elemanli olacak\n");
    scanf("%d",&n);
    int dizi[n];
    for(p=dizi;p<dizi+n;p++)
    {
        scanf("%d",p);
    }
    for(p=dizi,k=dizi+n-1;p<k;p++,k--)
    {
       tut=*p;
       *p=*k;
       *k=tut;
    }
    printf("yeni dizi:\n");
    for(p=dizi;p<dizi+n;p++)
    {
        printf("%3d",*p);
    }
    return 0;
}

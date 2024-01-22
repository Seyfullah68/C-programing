#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,i;
    int toplam=0;
    printf("kac sayi girilecek?\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d. sayi:",i+1);
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        toplam+=*(p+i);
    }
    printf("sayilarin toplami: %d",toplam);
    free((void *)p);
    return 0;
}

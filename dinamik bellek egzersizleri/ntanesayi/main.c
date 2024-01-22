#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n,i;
    printf("kac tane sayi girilecek");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d. sayi:",i+1);
        scanf("%d",&(*(p+i)));
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    return 0;
}

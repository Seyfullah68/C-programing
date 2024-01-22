#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tek,*cift,n,i;
    int c=0,t=0;
    printf("kac adet sayi??\n");
    scanf("%d",&n);
    tek=(int *)malloc(n*sizeof(int));
    cift=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            *(cift+c)=i;
            c++;
        }
        else
        {
            *(tek+t)=i;
            t++;
        }
    }
    printf("tekler: ");
    for(i=0;i<t;i++)
    {
        printf("%3d",*(tek+i));
    }
    printf("\ncifler: ");
    for(i=0;i<c;i++)
    {
        printf("%3d",*(cift+i));
    }
    free(tek);
    free(cift);

    return 0;
}

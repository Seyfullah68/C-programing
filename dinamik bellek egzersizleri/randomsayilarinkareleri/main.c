#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,i,n;
    printf("kac tane sayi uretilecek?\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    srand(time(0));
    printf("sayilar:");
    for(i=0;i<n;i++)
    {
        *(p+i)=rand()%10;
        printf("%3d",*(p+i));
    }
    printf("\nkareleri:");
    for(i=0;i<n;i++)
    {
        printf("%3d",(*(p+i))*(*(p+i)));
    }
    free(p);
    return 0;
}

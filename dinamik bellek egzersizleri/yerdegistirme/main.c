#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,x;
    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));
    printf("ilk sayi:");
    scanf("%d",p1);
    printf("\nikinci sayi:");
    scanf("%d",p2);
    x=*p1;
    *p1=*p2;
    *p2=x;
    printf("\n yerler degistiiii \n");
    printf("%d    %d",*p1,*p2);
    free(p1);
    free(p2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("iki sayi gir\n");
    scanf("%d %d",p1,p2);
    printf("toplam = %d",*p1 + *p2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p[7]={"p","s","c","p","cu","cum","paz"};
    int x;
    printf("x i gir\n");
    //scanf("%d",&x);
    do
    {
        printf("tekrar gir 1 ile 7 arasinda bir sayi\n");
        scanf("%d",&x);

    }
    while(x<1 || x>7);
    printf("%s",p[x-1]);
    return 0;
}

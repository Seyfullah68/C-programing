#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ben
{
    int x;
    char a;
    float y;
};
int main()
{
    fflush(stdin);
    union ben seyfo;
    seyfo.x=10;
    printf("\n");
    //seyfo.a='b';
    seyfo.y=5;
    printf("%d ",seyfo.x);
    printf("\n");
    printf("hafizada tutulan boyut: %d",sizeof(seyfo));
    return 0;
}

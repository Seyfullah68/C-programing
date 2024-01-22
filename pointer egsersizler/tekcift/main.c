#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seri[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *p;
    for(p=seri;p<seri+15;p++)
    {
        printf("%3d",*p);
    }
    printf("\n");
    for(p=seri;p<seri+15;p+=2)
    {
        printf("%3d",*p);
    }
    printf("\n");
    for(p=seri+1;p<seri+15;p+=2)
    {
        printf("%3d",*p);
    }
    return 0;
}

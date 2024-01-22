#include <stdio.h>
#include <stdlib.h>
#define n 10

int main()
{
    int dizi[n];
    int *pi,*ps;
    int max,min;
    max=min=dizi[0];
    printf("dizinin elemanlarini giriniz\n");
    for(pi=dizi;pi<dizi+n;pi++)
    {
        scanf("%d",pi);
    }
    for(pi=dizi;pi<dizi+n;pi++)
    {
        if(*pi>max)
        {
            max=*pi;
        }
        if(*pi<min)
        {
            min=*pi;
        }
    }
    printf("min: %d  ve max: %d",min,max);


    return 0;
}

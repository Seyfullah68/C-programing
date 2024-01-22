#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x','\0'};
    char dizi2[15];
    int i=0;
    char *p1,*p2;
    p2=dizi2;
    for(p1=dizi;p1<dizi+15;p1++)
    {
        *(p2+i)=*p1;
        i++;
    }
    for(i=0;i<15;i++)
    {
        printf("%c",*(dizi2+i));
    }
    return 0;
}

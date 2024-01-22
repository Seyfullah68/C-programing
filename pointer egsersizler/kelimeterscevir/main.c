#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[5][50];
    char *ilk,*son;
    int i;
    char tut;
    for(i=0;i<5;i++)
    {
        printf("%d inci kelimeyi gir\n",i+1);
        scanf("%s",dizi+i);
    }
    for(i=0;i<5;i++)
    {
        ilk=son=dizi+i;
        while(*son)
        {
            son++;
        }
        son--;
        while(ilk<son)
        {
            tut=*ilk;
            *ilk=*son;
            *son=tut;
            ilk++;
            son--;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",*(dizi+i));
    }
    return 0;
}

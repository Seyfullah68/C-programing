#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    char *pi,*ps;
    printf("mesajinizi giriniz\n");
    gets(dizi);
    for(ps=dizi;*ps;ps++);
    printf("diziniz %d kadar elemanli\n",ps-dizi);
    char a;
    printf("hangi harfi cikarmak istiyorsunuz\n");
    scanf("%c",&a);
    for(pi=dizi;*pi;pi++)
    {
        if(*pi==a)
        {
            strcpy(pi,pi+1);
        }
    }

        printf("%s",dizi);
    return 0;
}

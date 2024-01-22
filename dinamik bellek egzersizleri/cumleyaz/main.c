#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *c;
    c=(char *)malloc(100*sizeof(char));
    printf("cumleyi giriniz\n");
    gets(c);
    printf("girilen cumle: %s ",c);
    /*for(int i=0;*(c+i)!='\0';i++)
    {
        printf("%c",*(c+i));
    }*/
    free(c);
    return 0;
}

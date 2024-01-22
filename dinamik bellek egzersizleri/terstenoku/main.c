#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *cumle;
    int i;
    cumle=(char *)malloc(50*sizeof(char));
    printf("cumleyi giriniz: ");
    gets(cumle);
    for(i=strlen(cumle)-1;i>=0;i--)
    {
        printf("%c",*(cumle+i));
    }
    free(cumle);
    return 0;
}

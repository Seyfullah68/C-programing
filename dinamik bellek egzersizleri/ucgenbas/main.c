#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *kelime;
    int i,j;
    kelime=(char *)calloc(15,sizeof(char));
    printf("kelimeyi giriniz\n");
    gets(kelime);
    for(i=0;i<strlen(kelime);i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",kelime[j]);
        }
        printf("\n");
    }
    free(kelime);
    return 0;
}

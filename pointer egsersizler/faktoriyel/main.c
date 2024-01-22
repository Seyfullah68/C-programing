#include <stdio.h>
#include <stdlib.h>
int fak(int *n)
{
    int i;
    int carpim=1;
    for(i=*n;i>=1;i--)
    {
        carpim*=(*n);
        (*n)--;

    }
    return carpim;
}

int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    printf("sayinin faktoriyeli %d dir",fak(&sayi));
    return 0;
}


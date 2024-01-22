#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    int *p,n,i;
    char c;
    printf("kac sayi uretilecek\n");
    scanf("%d",&n);
    dosya=fopen("sayi.txt","w");
    p=(int *)malloc(n*sizeof(int));
    srand(time(0));
    for(i=0;i<n;i++)
    {
        p[i]=rand()%100;
        fprintf(dosya,"%3d",p[i]);
    }
    fclose(dosya);
    free(p);
    dosya=fopen("sayi.txt","r");
    do
    {
        c=getc(dosya);
        if(c!=EOF)
        {
            printf("%c  ",c);
        }
    }while(c!=EOF);
    fclose(dosya);

    return 0;
}

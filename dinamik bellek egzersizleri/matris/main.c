#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matris,satir,sutun,i,j;
    printf("kac satir olacak\n");
    scanf("%d",&satir);
    printf("kac sutun olacak\n");
    scanf("%d",&sutun);
    matris=(int **)malloc(satir*sizeof(int *));
    for(i=0;i<satir;i++)
    {
        matris[i]=(int *)malloc(sutun*sizeof(int));
        for(j=0;j<sutun;j++)
        {
            printf("%d. satir ve %d. sutun degerini gir:",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    printf("olusan matris:\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<satir;i++)
    {
        free(matris[i]);
    }
    free(matris);
    return 0;
}

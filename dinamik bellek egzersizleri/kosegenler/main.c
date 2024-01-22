#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut,i,j,toplam=0;
    int **mat;
    printf("matrisin boyu ne olacak\n");
    scanf("%d",&boyut);
    mat=(int **)calloc(boyut,sizeof(int *));
    for(i=0;i<boyut;i++)
    {
       mat[i]=(int *)malloc(boyut*sizeof(int));
       for(j=0;j<boyut;j++)
       {
           printf("matis[%d][%d]:",i+1,j+1);
           scanf("%d",&mat[i][j]);
           if(i==j)
           {
               toplam+=mat[i][j];
           }
       }
    }
    printf("\n toplam:%d",toplam);
    for(i=0;i<boyut;i++)
    {
        free(mat[i]);
    }
    free(mat);
    return 0;
}

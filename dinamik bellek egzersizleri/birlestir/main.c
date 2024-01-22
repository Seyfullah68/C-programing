#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,sayac=0;
    int *p1,*p2,*total;
    printf("ilki kac adet olacak\n");
    scanf("%d",&n);
    printf("ikincisi kac adet olacak\n");
    scanf("%d",&m);
    p1=(int *)calloc(n,sizeof(int));
    p2=(int *)calloc(m,sizeof(int));
    srand(time(0));
    printf("ilk sayilar: ");
    for(i=0;i<n;i++)
    {
        *(p1+i)=rand()%10;
        printf("%3d",p1[i]);
    }
    printf("\nikinci sayilar:");
    for(j=0;j<m;j++)
    {
        p2[j]=rand()%50;
        printf("%3d",*(p2+j));
    }
    total=(int *)malloc((n+m)*sizeof(int));
    for(i=0;i<n;i++)
    {
        *(total+sayac)=*(p1+i);
        sayac++;
    }
    for(i=0;i<m;i++)
    {
        *(total+sayac)=p2[i];
        sayac++;
    }
    printf("\nbirlestirilmis hali:");
    for(i=0;i<sayac;i++)
    {
        printf("%3d",*(total+i));
    }
    free(p1);
    free(p2);
    free(total);
    return 0;
}

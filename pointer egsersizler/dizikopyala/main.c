#include <stdio.h>
#include <stdlib.h>
void diziyial(int *x,int *y)
{
    int i=0;
    while(i<*y)
    {
        scanf("%d",x+i);
        i++;
    }
}
void bastir(int *x,int *y)
{
    int i=0;
    while(i<*y)
    {
        printf("%4d",*(x+i));
        i++;
    }
    printf("\n");
}
void kopyala(int *x,int *y, int *z)
{
    while(x<=z)
    {
        *y=*x;
        x++;
        y++;
    }

}
int main()
{
    int a;
    printf("dizinin eleman sayisini giriniz\n");
    scanf("%d",&a);
    int dizi[a];
    diziyial(dizi,&a);
    bastir(dizi,&a);
    int dizi2[a];
    int *p1,*p2,*son;
    p1=dizi;
    p2=dizi2;
    son=&dizi[a-1];
    kopyala(p1,p2,son);
    bastir(dizi2,&a);
    return 0;
}

#include <stdio.h>
void sum(int a, int b);
void sum_2(int *c, int *d);
int main()
{
    int a, b,c,d;
    scanf("%d %d", &a, &b);
    printf("2nd");
    scanf("%d %d",&c,&d);
    sum(a, b);
    sum_2(&c,&d);
    printf("call by reference == %d %d\n",c,d);

    return 0;
}
void sum(int a, int b)
{
    int tem;
    tem=a;
    a=b;
    b=tem;
   printf("call bt value == %d %d\n",a,b);
}
void sum_2(int *c,int *d){
    int ver;
    ver=*c;
    *c=*d;
    *d=ver;
}

#include <stdio.h>
void fibbo(int n);
int main()
{
    int n;
    scanf("%d",&n);
    fibbo(n);
    return 0;
}
void fibbo(int n){
    int a=0,b=1,next,i=0;
    while (i<=n)
    {
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
        i++;
    }
    // printf("%d",a);
    // if (n>0)
    // {
    //     return 0;
    // }

    // return fibbo(b,a+b,n-1);
}

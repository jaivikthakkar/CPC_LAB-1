#include <stdio.h>
int f(int n, int ver);
int main()
{
    int n,ver=0;
    printf("enetr number :");
    scanf("%d",&n);
    int res = f(n, ver);
     printf("%d",res);

    return 0;
}
int f(int n,int ver){

    if (n==0)
    {
        return ver ;
    }
    else
    {
        return f(n/10,ver*10 + n%10);
    }
}

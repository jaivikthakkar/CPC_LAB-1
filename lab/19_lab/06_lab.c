#include <stdio.h>
int f(int n, int i);
int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%d", &i);
    int res= f(n,i);
    printf("%d",res);
    return 0;
}
int f(int n,int i){
    if (i==0)
    {
      return 1;
    }
    else
    {
        return n*f(n,i-1);
    }
}

#include <stdio.h>

int main()
{
    int n,r;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r : ");
    scanf("%d",&r);
    ncr(n,r);
    npr(n,r);
    return 0;
}
int ncr(int n,int r){
    int mul_n=1,mul_r=1,mul_nr=1;
    for (int i = 1; i <= n; i++)
    {
        mul_n=mul_n*i;
    }
    for (int i = 1; i <= r; i++)
    {
        mul_r = mul_r* i;
    }
    for (int i = 1; i < n-r; i++)
    {
        mul_nr=mul_nr*i;
    }
    printf("%f", (float)mul_n/(mul_r*(mul_nr)));
    printf("%f", (float)mul_n / (mul_nr));
}

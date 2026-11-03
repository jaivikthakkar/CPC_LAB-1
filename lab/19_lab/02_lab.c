#include <stdio.h>
void fu(int n,int array[]);
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    fu(n,array);
    return 0;
}
void fu(int n,int array[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
}

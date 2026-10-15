#include <stdio.h>

int main()
{
    int n,flage=0;
    printf("enetr n :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1;j>i;j--)
        {
            if (array[i]==array[j])
            {
                flage=1;
            }
        }
        

    }


    return 0;
}

#include <stdio.h>

int main()
{
    int n,count=1,max=1;
    printf("enter n :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i <  n; i++)
    {
        scanf("%d",&array[i]);
    }

    int i =1;
    while (i<n)
    {

            if (array[i-1] % 2 != array[i] % 2 )
            {
                count++;
                i = i +1;
            }
            else
            {
                i = i + 1;
                count = 1;
            }

        if (max<count)
        {
            max=count;
        }
    }
    printf("%d",max);

    return 0;
}

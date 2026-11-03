#include <stdio.h>

int main()
{
    int n,a_1,ad;
    int a_1_side;
        printf("enter n :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enetr number :");
        scanf("%d",&array[i]);
    }
    printf("if you wnat remove array element then preess 1 and if you wnat instert number then printf 0");
    scanf("%d",&a_1);
    if (a_1==1)
    {
        printf("which side you you wnat remove element :");
        scanf("%c",&a_1_side);
        if (a_1_side== 0)
        {
            for (int i = 0; i < n-1; i++)
            {
                printf("%d",array[i]);
            }
        }
        else
        {
            for (int i = 1; i < n ; i++)
            {
                printf("%d", array[i]);
            }
        }
    }
    else
    {
        n++;
        printf("which side you you wnat add element : ");
        scanf("%d",&a_1_side);
        printf("enter number you want to add \n");
        scanf("%d",&ad);
        if (a_1_side == 0)
        {
            array[n]=ad;
            for (int i = 0; i < n; i++)
            {
                printf("%d", array[i]);
            }
        }
        else
        {

            for (int i = n; i>0; i--)
            {
                array[i]=array[i-1];
            }
            array[0]=ad;
            for (int i = 0; i < n; i++)
            {
                printf("%d",array[i]);
            }

        }
    }



    return 0;
}

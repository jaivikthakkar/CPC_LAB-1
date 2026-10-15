#include <stdio.h>
#include "07_lab.h"
int main()
{
    int a;
    scanf("%d", &a);
    int ans1 = prime(a);
    int ans2 = armstrong(a);
    int ans3 = perfect(a);
    if (ans1 == 0)
    {
        printf("prime ");
    }
    else
    {
        printf(" not prime ");
    }
    if (ans2 == 1)
    {
        printf("arm ");
    }
    else
    {
        printf(" not arm ");
    }
    if (ans3 == 0)
    {
        printf("per ");
    }
    else
    {
        printf(" not per ");
    }

    return 0;
}

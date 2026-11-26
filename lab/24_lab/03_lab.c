#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, sum = 0;
    printf("enetr n :");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number : ");
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    printf("sum==%d", sum);
    free(ptr);
    return 0;
}

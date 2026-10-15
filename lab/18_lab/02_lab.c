#include <stdio.h>
int max(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("max=%d", max(a, b));
    return 0;
}
int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else if (a<b){
        return b;
    }
    else
    {
        return 0;
    }


}

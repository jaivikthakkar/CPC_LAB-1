#include <stdio.h>
float interest(int p, int r, int t);
int main()
{
    int p, r, t;
    scanf("%d %d %d", &p, &r, &t);
    printf("interst=%f", interest(p, r, t));
    return 0;
}
float interest(int p, int r, int t)
{
    if (p>r && p>t)
    {
        return p;
    }
    else if(r>t && r>p){
        return r;
    }
    else
    {
        return t;
    }
}

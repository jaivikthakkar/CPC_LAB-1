#include <stdio.h>
struct employeep
{
    char name[30];
    int id;
    float scalary;
};
union employee
{
    char name[30];
    int id;
    float scalary;
};


int main()
{
    struct employeep e1,e2;
    union employee a,b;
    scanf("%s",&e1.name);
    scanf("%d",&e1.id);
    scanf("%f",&e1.scalary);
    scanf("%s", &a.name);
    scanf("%d", &a.id);
    scanf("%f", &a.scalary);
    printf("%s\n", e1.name);
    printf("%d\n", e1.id);
    printf("%f\n", e1.scalary);
    printf("%s\n", a.name);
    printf("%d\n", a.id);
    printf("%f\n", a.scalary);
    return 0;
}

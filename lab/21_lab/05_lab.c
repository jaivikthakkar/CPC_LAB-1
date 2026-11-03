#include <stdio.h>
struct add
{
    char city[50];
    int hn;
};
struct std
{
    char name[50];
    int id;
    struct add add1;
};
int main()
{   struct std s1;
    printf("enetr your name :");
    scanf("%s",s1.name);
    printf("enter your id pls:");
    scanf("%d",&s1.id);
    printf("enter your city :");
    scanf("%s",s1.add1.city);
    printf("enter your house number :");
    scanf("%d",&s1.add1.hn);
    printf("name==%s \n id==%d \n city==%s \n hs==%d ",s1.name,s1.id,s1.add1.city,s1.add1.hn);
     return 0;
}

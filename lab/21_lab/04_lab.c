#include <stdio.h>
struct st
{
    int id;
    char name[30];
};

int main()
{
    struct st *stp, st1;
    stp=&st1;
    printf("eter your id\n");
    scanf("%d", &stp->id);
    printf("\nenter your number :");
    scanf("%s", stp->name);
    printf("id==%d\n", stp->id);
    printf("name==%s", stp->name);
    return 0;
}

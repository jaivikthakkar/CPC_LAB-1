#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[30];
};

int main()
{
    struct student *st1;
    st1 = (struct student *)malloc(sizeof(struct student));
    printf("Enetr roll number :");
    scanf("%d", &st1->roll);
    printf("enter your name : ");
    scanf("%s", st1->name);
    printf("roll== %d and name==%s",st1->roll,st1->name);
    free(st1);
    return 0;
}

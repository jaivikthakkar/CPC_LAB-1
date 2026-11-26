#include <stdio.h>
struct student
{
    int rollno;
    char name;
    int backlog;
};
void main()
{
    struct student s[100];
    FILE *fp;
    int n;
    printf("Enter the number of input you want to give : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Roll number of the student : ");
        scanf("%d", &s[i].rollno);

        printf("Enter the Name of the student : ");
        scanf(" %s", s[i].name);

        printf("Enter the Backlog of the student : ");
        scanf("%d", &s[i].backlog);
    }
    fp = fopen("student.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n",
                s[i].rollno,
                s[i].name,
                s[i].backlog);
    }
    fclose(fp);
    fp = fopen("student.txt", "r");

    printf("\nStudent with more than five backlogs : \n");

    while (fscanf(fp, "%d %s %d",
                  &s[0].rollno,
                  s[0].name,
                  &s[0].backlog) == 3)

    {
        if (s[0].backlog > 5)
        {
            printf("Roll no : %d", s[0].rollno);
        }
    }
    fclose(fp);
}

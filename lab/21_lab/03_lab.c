#include <stdio.h>
struct s_name
{
    char s_n[60];
    float percentge;
    int age;
};
int main()
{
    struct s_name s[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &s[i].s_n);
        scanf("%f", &s[i].percentge);
        scanf("%d", &s[i].age);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s", s[i].s_n);
        printf("%f", s[i].percentge);
        printf("%d", s[i].age);
    }
    return 0;
}

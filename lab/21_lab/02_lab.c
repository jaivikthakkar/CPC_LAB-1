#include <stdio.h>
struct book
{
    char book_n[60];
    char book_a[30];
    char book_p[50];
    float price;
};

int main()
{
    struct book b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &b[i].book_n);
        scanf(" %s", &b[i].book_a);
        scanf(" %s", &b[i].book_p);
        scanf("%f", &b[i].price);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s", b[i].book_n);
        printf(" %s", b[i].book_a);
        printf(" %s", b[i].book_p);
        printf("%f", b[i].price);
        printf("\n");
    }

    return 0;
}

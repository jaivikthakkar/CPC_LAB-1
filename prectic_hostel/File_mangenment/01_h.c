#include <stdio.h>

int main()
{
    FILE *pr = NULL;
    char ch;
    pr = fopen("text1.txt", "w");
    printf("enter your charecter : ");
    scanf("%c",&ch);
    fputc(ch,pr);
    fclose(pr);
    return 0;
}

#include <stdio.h>

int main()
{
    FILE *pr;
    pr=fopen("text2.txt","r");
    // char ch;
    // ch=fgetc(pr);
    // printf("%c",ch);
    char ch[20];
    fgets(ch,7,pr);
    printf("%s",ch);
    fclose(pr);

    return 0;
}

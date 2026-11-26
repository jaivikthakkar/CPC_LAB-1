#include <stdio.h>

int main()
{
    FILE *pr;
    pr=fopen("text2.txt","w");
    char st[50],ch;
    int a;
    printf("enter your string :");
    gets(st);
    printf("enetr your charecter :");
    scanf("%c",&ch);
    printf("enter your integer :");
    scanf("%d",&a);
    // fputs(st,pr);
    fprintf(pr,"%c %d %s",ch,a,st);
    fclose(pr);
    return 0;
}

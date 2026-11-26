#include <stdio.h>

int main()
{
    int chr=0,space=0,tabs=0,new=0;
    FILE *pr;
    pr=fopen("first.text","w");
    char ch=fgetc(pr);
    while (ch != EOF)
    {
        if (ch==' ')
        {
           space++;
        }
        else if(ch=='\t'){
            tabs++;
        }
        else if(ch=='\n'){
            new++;
        }
        else
        {
            chr++;
        }
         ch=fgetc(pr);
    }
    printf("no char==%d",chr);
    printf("no space==%d",space);
    printf("no tabs==%d",tabs);
    printf("no new==%d",new);
    return 0;
}

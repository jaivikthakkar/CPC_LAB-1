#include <stdio.h>

int main()
{
    char array[2000];
    printf("enter your string");
    gets(array);
    char n,ver;
    int flage=0;
    printf("enter your charcter :");
    scanf("%c",&n);
    for (int i = 0; array[i]!='\0'; i++)
    {
        if (array[i]==n)
        {
            flage = 1;
        }


    }
    if (flage==1)
    {
        printf("yes\n");

    }
    else
    {
        printf("no");
    }
    printf("you wnat to replace it then which position\n");
    scanf("%d", &flage);
    printf("enter your cherecter\n");
    scanf(" %c",&ver);
    array[flage] = ver;
    for (int i = 0; array[i]!='\0'; i++)
    {
        printf("%c",array[i]);
    }

    return 0;
}

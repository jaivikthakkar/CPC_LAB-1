#include <stdio.h>
#include <string.h> //header file for string functions
void main()
{
    char s1[10], s2[10];
    printf("Enter string:");
    gets(s1);
    printf("%d\n", strlen(s1)); // returns length of s1
    printf("Enter string-2:");
    gets(s2);
    if (strcmp(s1, s2) == 0){
        printf("Strings are same");
    }
    else{
        printf("Strings are not same");
    }
}

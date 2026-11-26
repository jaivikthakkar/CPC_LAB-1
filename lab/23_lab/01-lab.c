#include <stdio.h>
void main()
{
    FILE *fp; // p is a FILE type pointer
    char ch;  // ch is used to store single character
    fp = fopen("file2.txt", "r");
    do
    {                  // repeat step 9 and 10 until EOF is reached
        ch = getc(fp); // get character pointed by p into ch
        putchar(ch);   // print ch value on monitor
    } while (ch != EOF); // condition to check EOF is reached or not
    fclose(fp); // open file in read mode and store file pointer in p
}

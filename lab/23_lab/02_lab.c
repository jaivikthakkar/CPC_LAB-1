#include <stdio.h>
void main()
{
    FILE *fp1, *fp2;             // p and q is a FILE type pointer
    char ch;                     // ch is used to store temporary data
    fp1 = fopen("file1.txt", "r"); // open file “file1.c” in read mode
    fp2 = fopen("file2.txt", "a"); // open file “file2.c” in write mode
    do
    {                   // repeat step 9 and 10 until EOF is reached
        ch = getc(fp1); // get character pointed by p into ch
        putc(ch, fp2);  // print ch value into file, pointed by pointer q
    } while (ch != EOF);
    fclose(fp2);
    fp2 = fopen("file2.txt", "r");
    do
    {                   // repeat step 9 and 10 until EOF is reached
        ch = getc(fp2);  // get character pointed by p into ch
        putchar(ch);    // print ch value into file, pointed by pointer q
    } while (ch != EOF); // condition to check EOF is reached or not
    fclose(fp1); // free up the file pointer p
    fclose(fp2); // free up the file pointer q
    printf("File copied successfully...");
}

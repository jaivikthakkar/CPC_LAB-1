#include <stdio.h>
#include<string.h>
int main()
{
    char array[2000];
    gets(array);
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            array[i] = array[i] - 32;
        }
    }
    puts(array);
    return 0;
}

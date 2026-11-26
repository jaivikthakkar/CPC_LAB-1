#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr_i;
    char *ptr_ch;
    float *ptr_f;
    ptr_i = (int *)malloc(sizeof(int));
    ptr_ch = (char *)malloc(sizeof(char));
    ptr_f = (float *)malloc(sizeof(float));
    *ptr_i=24;
    *ptr_ch='c';
    *ptr_f=25.67;
    printf("%d",*ptr_i);
    printf("%c", *ptr_ch);
    printf("%f", *ptr_f);
    free(ptr_i);
    free(ptr_ch);
    free(ptr_f);
    return 0;
}

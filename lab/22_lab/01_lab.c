#include <stdio.h>

int main()
{
    FILE *fp;
    fp= fopen("first.text","w");
    printf("done");
    fclose(fp);
    return 0;
}

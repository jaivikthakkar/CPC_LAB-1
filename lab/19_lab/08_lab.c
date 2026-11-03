#include <stdio.h>
void swap(int array_1[], int array_2[],int n);
int main()
{
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    int array_1[n],array_2[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elements for first array_1 : \n");
        scanf("%d",&array_1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter elements for first array_2 : \n");
        scanf("%d", &array_2[i]);
    }
    swap(array_1,array_2,n);
    printf("enter elements for first array_1 : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array_1[i]);
    }
    printf("\n enter elements for first array_1 : \n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", array_2[i]);
    }
    return 0;
}
void swap(int array_1[],int array_2[],int n){
    int ver;
    for (int i = 0; i < n; i++)
    {
        ver=array_1[i];
        array_1[i]=array_2[i];
        array_2[i]=ver;
    }
}

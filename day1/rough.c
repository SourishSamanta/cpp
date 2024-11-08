#include <stdio.h>

int *arr();

void main()
{
    int *b=arr();
    printf("%d\n",b);
}

int *arr()
{
    int arr[2]={1,2};
    int x=2;
    return x;
}
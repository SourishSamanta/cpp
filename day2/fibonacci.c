// fibonacci series generator
#include <stdio.h>

int fibonacci(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the nth fibonacci number to find: ");
    scanf("%d", &n);
    int result;
    for (int i = 0; i < n; i++)
    {
        result = fibonacci(i);
        printf("%d", result);
    }
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
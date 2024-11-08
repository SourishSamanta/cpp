// optimised fibonacci
#include <stdio.h>

void fibonacci(int a, int b, int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter nth for fibonacci series: ");
    scanf("%d", &n);
    fibonacci(0, 1, n);
    printf("\n");
    return 0;
}

void fibonacci(int a, int b, int n)
{
    int c;
    if (n > 0)
    {
        c = a + b;
        printf("%d ", a);
        fibonacci(b, c, n - 1);
    }
}
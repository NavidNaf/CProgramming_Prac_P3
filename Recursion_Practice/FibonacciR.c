#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(void)
{
    int numb;
    printf("Number: ");
    scanf("%i", &numb);
    int fibonacci = fib(numb);
    printf("Fibonacci in place %i: %i", numb, fibonacci);
}
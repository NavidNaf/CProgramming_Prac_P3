#include <stdio.h>

int fact(int n)
{
    //base case
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main(void)
{
    int numb;
    printf("Number: ");
    scanf("%i", &numb);
    int factorial = fact(numb);
    printf("Factorial of %i: %i", numb, factorial);
}
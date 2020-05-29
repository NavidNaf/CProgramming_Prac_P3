#include <stdio.h>

int collatz(int n)
{
    // base case
    int step = 0;
    if (n == 1)
    {
        return 0; // 1 is not a step
    }
    // recursive case
    else if (n % 2 == 0)
    {
        return (collatz(n / 2) + 1);
    }
    else if (n % 2 != 0)
    {
        return (collatz(3 * n + 1) + 1);
    }
}

int main(void)
{
    int numb;
    printf("Number: ");
    scanf("%i", &numb);
    int coll = collatz(numb);
    printf("Steps Reuqired to reach 1: %i", coll);
}
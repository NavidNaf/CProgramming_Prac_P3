#include <stdio.h>

int add(int n)
{
    if (n == 1)
        return 1;
    else
        return n + add(n - 1);
}

int main(void)
{
    int n;
    do
    {
        printf("n: ");
        scanf("%i", &n);
    } while (n < 1);

    int sum = add(n);
    printf("Sum: %i", sum);
}
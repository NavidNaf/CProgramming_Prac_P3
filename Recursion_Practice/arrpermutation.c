#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int fact(int n);
int perm(int n, int r);

int main(void)
{
    int number[] = {10, 7, 56, 48, 22, 35, 22, 17, 5, 11};
    int size = sizeof(number) / sizeof(int);
    //printf("%i", size);
    for (int i = 0; i < size; i++)
    {
        int r = i + 1;
        int permu = perm(size, r);
        printf("%i P %i: %i\n", size, r, permu);
    }
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int perm(int n, int r)
{
    int permu = fact(n) / fact(n - r);
    return permu;
}
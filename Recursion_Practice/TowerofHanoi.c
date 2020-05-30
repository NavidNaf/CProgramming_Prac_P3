#include <stdio.h>

void toh(int n, char A, char B, char C)
{
    if (n > 0)
    {
        toh(n - 1, A, C, B);
        printf("Disc %i Transfer %c to %c\n", n, A, C);
        toh(n - 1, B, A, C);
    }
}

int main(void)
{
    int numb;
    printf("Disc: ");
    scanf("%i", &numb);
    char A = 'A', B = 'B', C = 'C';
    toh(numb, A, B, C);
}
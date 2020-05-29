#include <stdio.h>

int main(void)
{
    int n, x, j;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    printf("Give Unsorted Values.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    for (int i = 1; i < n; i++)
    {
        x = ara[i]; // assign to x
        j = i - 1; // insertion starts from the prev. one
        while (j >= 0 && ara[j] > x) // while works if only the prev. is greater
        {
            ara[j + 1] = ara[j]; // if 0>1 assign the next to prev.
            j--; // decrement so that drops from while
        }
        ara[j + 1] = x; // j value becomes -1 after while loop, that is why j+1
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i ", ara[i]);
    }
}
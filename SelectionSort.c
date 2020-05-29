#include <stdio.h>

int main(void)
{
    int n;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                int x = ara[i];
                ara[i] = ara[j];
                ara[j] = x;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i ", ara[i]);
    }
}
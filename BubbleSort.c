#include <stdio.h>

int main(void)
{
    int counter = 2;
    int n, x, c;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    printf("Give Unsorted Values.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            //counter = 0;
            if (ara[j] > ara[j + 1])
            {
                x = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = x;
                counter = counter + 1;
                //c = counter;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i ", ara[i]);
    }
}
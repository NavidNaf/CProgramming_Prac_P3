#include <stdio.h>

int main(void)
{
    int i, j, temp, n, index;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ara[j] < ara[index])
            {
                index = j; //if the value at index is larger, change the index
            }
        }
        if (index != i) //if index value changes
        {
            temp = ara[i];
            ara[i] = ara[index];
            ara[index] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i ", ara[i]);
    }
}
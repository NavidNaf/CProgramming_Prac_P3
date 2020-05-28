#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Value *sorted* %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    int mid, value, low = 0, high = n - 1;
    printf("Value to find: ");
    scanf("%i", &value);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (value == ara[low] || value == ara[high] || value == ara[mid])
        {
            break;
        }
        if (ara[mid] > value)
        {
            high = mid - 1;
        }
        else if (ara[mid] < value)
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        printf("Value Not Found");
    }
    if (ara[mid] == value)
    {
        printf("Value %i found at %i", ara[mid], mid + 1);
    }
    else if (ara[low] == value)
    {
        printf("Value %i found at %i", ara[low], low + 1);
    }
    else if (ara[high] == value)
    {
        printf("Value %i found at %i", ara[high], high + 1);
    }
}
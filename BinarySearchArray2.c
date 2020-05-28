#include <stdio.h>

int main(void)
{
    int n, num;
    printf("Enter the Size of the array: ");
    scanf("%i", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %ith value: ", i + 1);
        scanf("%i", &ara[i]);
    }
    printf("Enter the value that you want to find: ");
    scanf("%i", &num);
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (num == ara[mid])
        {
            break;
        }
        if (num > ara[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("Not Found in the Array");
    }
    else
    {
        printf("%i found in the array, it is the %ith value", ara[mid], mid + 1);
    }
}
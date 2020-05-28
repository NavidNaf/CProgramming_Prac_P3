#include <stdio.h>

int main(void)
{
    int high, low, mid, n;
    printf("Enter High Range of the Value: ");
    scanf("%i", &high);
    printf("Enter Low Range of the Value: ");
    scanf("%i", &low);
    printf("Enter the Value: ");
    scanf("%i", &n);
    while (low <= high)
    {
        mid = (low + high) / 2;
        //checking high, low, mid
        if (n == high || n == low || n == mid)
        {
            //printf("Your Value is: %i\n", n);
            break; //breaking the infinite loop
        }
        //algorithm
        if (n > mid)
        {
            low = mid + 1;
        }
        else if (n < mid)
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("Not Found");
    }
    else if (n == mid)
    {
        printf("Your Value is: %i", mid);
    }
    else if (n == high)
    {
        printf("Your Value is: %i", high);
    }
    else
    {
        printf("Your Value is: %i", low);
    }
}
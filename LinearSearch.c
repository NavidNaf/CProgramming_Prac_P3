#include <stdio.h>

int main(void)
{
    int n;
    printf("Array Size:");
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }
    int value;
    printf("Value to Find: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++)
    {
        if (ara[i] == value)
        {
            printf("Value %i found at %i position.", ara[i], i + 1);
            return 0;
        }
    }
    printf("Value Not Found.");
    return 1;
}
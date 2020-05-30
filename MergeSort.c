#include <stdio.h>
#include <stdlib.h>

void merge(int ara[], int low, int mid, int high)
{
    int LengthLeft = mid - low + 1;
    int LengthRight = high - mid;
    int i, j, k;

    int left[LengthLeft];
    int right[LengthRight];

    for (i = 0; i < LengthLeft; i++)
    {
        left[i] = ara[low + i];
    }
    for (j = 0; j < LengthRight; j++)
    {
        right[j] = ara[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = low;

    while (i < LengthLeft && j < LengthRight)
    {
        if (left[i] <= right[j])
        {
            ara[k] = left[i];
            i++;
        }
        else
        {
            ara[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < LengthLeft)
    {
        ara[k] = left[i];
        i++;
        k++;
    }
    while (j < LengthRight)
    {
        ara[k] = right[j];
        j++;
        k++;
    }
}

void merge_sub(int ara[], int low, int high)
{
    if (low < high)
    {

        int mid = low + (high - low) / 2;

        merge_sub(ara, low, mid);
        merge_sub(ara, mid + 1, high);
        merge(ara, low, mid, high);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

int main(void)
{
    int n;
    printf("Array Size: ");
    scanf("%i", &n);
    int ara[n];
    printf("Give Unsorted Values.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i + 1);
        scanf("%i", &ara[i]);
    }

    printf("Given array is \n");
    printArray(ara, n);

    merge_sub(ara, 0, n);

    printf("\nSorted array is \n");
    printArray(ara, n);
    return 0;
}

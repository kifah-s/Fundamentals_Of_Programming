//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int compareEven(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int compareOdd(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void rearrangeArray(int arr[], int size)
{
    int *even = malloc(size * sizeof(int));
    int *odd = malloc(size * sizeof(int));
    int evenCount = 0, oddCount = 0;
    // Separate even and odd numbers
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount++] = arr[i];
        }
        else
        {
            odd[oddCount++] = arr[i];
        }
    }
    // Sort even and odd numbers
    qsort(even, evenCount, sizeof(int), compareEven);
    qsort(odd, oddCount, sizeof(int), compareOdd);
    // Combine sorted arrays
    for (int i = 0; i < evenCount; i++)
    {
        arr[i] = even[i];
    }
    for (int i = 0; i < oddCount; i++)
    {
        arr[i + evenCount] = odd[i];
    }
    free(even);
    free(odd);
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rearrangeArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    printf("\n\n");

    return 0;
}
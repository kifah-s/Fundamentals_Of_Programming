#include "array_operations.h"
#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = find_sum(arr, size);
    std::cout << "The sum of the array elements is " << sum << std::endl;
    return 0;
}

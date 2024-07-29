

//* Sum And Product Program (Version 1).

/*
 * Write a program that initializes an array of 7 integers with values {1, 3, 2, 3, 3, 1, 1},
 * calculates the sum of all seven numbers, and calculates the product of all seven numbers,
 * Then, output both the total sum and the total product.
 */

/*
! Output:
! Sum of all numbers = 14
! Product of all numbers = 54
*/

#include <stdio.h>

void welcomeMessageFun();
void sumAndProductNumbersFun(int arr[], int len, int sum, int pro);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[] = {1, 3, 2, 3, 3, 1, 1}, sum = 0, product = 1;

    // Calculate the length of my array.
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

    sumAndProductNumbersFun(myArray, myArrayLength, sum, product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And Product Program (Version 1) ..\n\n");
}

// Sum And Product Numbers - Function.
void sumAndProductNumbersFun(int arr[], int len, int sum, int pro)
{
    for (int i = 0; i < len; i++)
    {

        sum = sum + arr[i];
        pro = pro * arr[i];
    }

    printf("Sum of all numbers = %i\n", sum);
    printf("Product of all numbers = %i", pro);
}

//
//* End Function ..

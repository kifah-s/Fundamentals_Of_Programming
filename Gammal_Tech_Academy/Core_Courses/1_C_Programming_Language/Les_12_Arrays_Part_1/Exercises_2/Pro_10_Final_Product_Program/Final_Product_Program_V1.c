

//* Final Product Program (Version 1).

/*
 * Write a program that declares an array of 5 integers,
 * reads 5 numbers from the user,
 * calculates the product of all the numbers,
 * and then outputs the final product.
 */

/*
! Input:
! Please enter 5 Numbers:
! Number 1: 1
! Number 2: 2
! Number 3: 3
! Number 4: 4
! Number 5: 5

! Output:
! Product = 120
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void productAndPrintNumbersFun(int s, int arr[], int pro);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable And Array.
    int myArraySize = 5, myArray[myArraySize], product = 1;

    // Getting Number Of Array.
    gettingNumbersFun(myArraySize, myArray);

    // Product And Print Numbers Of Array.
    productAndPrintNumbersFun(myArraySize, myArray, product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Final Product Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int s, int arr[])
{
    printf("Please enter %i Numbers:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Product And Print Numbers Of Array - Function.
void productAndPrintNumbersFun(int s, int arr[], int pro)
{
    for (int i = 0; i < s; i++)
    {
        // pro = pro * arr[i];
        pro *= arr[i];
    }
    printf("\nProduct = %i", pro);
}

//* End Function ..

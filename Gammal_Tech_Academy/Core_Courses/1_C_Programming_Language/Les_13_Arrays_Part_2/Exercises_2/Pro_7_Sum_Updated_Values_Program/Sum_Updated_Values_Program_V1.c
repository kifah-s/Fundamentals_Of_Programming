

//* Sum Updated Values Program (Version 1).

/*
 * Write a program that initializes an array of 5 integers {1, 2, 3, 4, 5},
 * increments each element of the array by 1, calculates the sum of the updated values,
 * and then prints the total sum.
 */

/*
! Output:
! Sum Of The Update Array Values: 20
*/

#include <stdio.h>
#include <stdbool.h>

void welcomeMessageFun();
void updateArrayValuesFun(int arr[], int len);
void sumArrayValuesFun(int arr[], int len, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array And Calculate The Length Of Array.
    int myArray[] = {1, 2, 3, 4, 5}, mtArraylength = sizeof(myArray) / sizeof(myArray[0]);
    int sum = 0;

    // Update Value And Print Array.
    updateArrayValuesFun(myArray, mtArraylength);

    // Sum Array Values.
    sumArrayValuesFun(myArray, mtArraylength, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Updated Values Program (Version 1) ..\n\n");
}

// Update Array Values - Function.
void updateArrayValuesFun(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // arr[i] = arr[i] + 1;
        arr[i]++;
    }
}

// Sum Array Values - Function.
void sumArrayValuesFun(int arr[], int len, int sum)
{
    for (int i = 0; i < len; i++)
    {
        // sum = sum = arr[i];
        sum += arr[i];
    }

    printf("Sum Of The Update Array Values: %i", sum);
}
//* End Function ..

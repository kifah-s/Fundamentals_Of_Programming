

//* Sum Even Numbers Program (Version 1).

/*
 * Write a program that initializes an array of 5 integers {1, 2, 3, 4, 5},
 * checks each element for even numbers, calculates the sum of the even numbers,
 * and then prints the total sum.
 */

/*
! Output:
! Sum Of The Even Numbers In The Array: 6
*/

#include <stdio.h>
#include <stdbool.h>

void welcomeMessageFun();
int sumEvenNumbersFun(int arr[], int arrLen, int sumEve);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array And Calculate The Length Of Array.
    int myArray[] = {1, 2, 3, 4, 5}, mtArraylength = sizeof(myArray) / sizeof(myArray[0]);
    int sumEvenNumbers = 0;

    // Sum Even Numbers.
    sumEvenNumbers = sumEvenNumbersFun(myArray, mtArraylength, sumEvenNumbers);

    printf("Sum Of The Even Numbers In The Array: %i", sumEvenNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Even Numbers Program (Version 1) ..\n\n");
}

// Sum Even Numbers - Function.
int sumEvenNumbersFun(int arr[], int arrLen, int sumEve)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEve = sumEve + arr[i];
        }
    }

    return sumEve;
}
//* End Function ..

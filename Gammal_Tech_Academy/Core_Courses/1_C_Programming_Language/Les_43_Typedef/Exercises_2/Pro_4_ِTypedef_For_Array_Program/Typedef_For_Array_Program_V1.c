

//* Typedef For Array Program (Version 1).

/*
 * Define a typedef for an array of integers named IntegerArray.
 * Create a program that declares and prints the values of an IntegerArray variable.
 */

/*
! Output:
! Value: 1, 2, 3, 4, 5
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef int IntegerArray[5];

void welcomeMessageFun();
void PrintValuesOfArrayFun(IntegerArray x);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    IntegerArray myArr = {1, 2, 3, 4, 5};

    // Call Function.
    PrintValuesOfArrayFun(myArr);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Array Program (Version 1) ..\n\n");
}

// Print Values Of Array - Function.
void PrintValuesOfArrayFun(IntegerArray x)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", x[i]);
    }
}
//* End Function ..

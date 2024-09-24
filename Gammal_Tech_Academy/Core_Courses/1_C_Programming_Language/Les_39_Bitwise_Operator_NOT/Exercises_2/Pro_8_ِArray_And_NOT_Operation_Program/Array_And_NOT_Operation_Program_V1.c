

//* Array And NOT Operation Program (Version 1).

/*
 * Write a program that takes an array of integers,
 * performs a bitwise NOT operation on each element, and then prints the results.
 */

/*
! Output:
! Update array after bitwise NOT operation:
! -6    -13     -9      -26     -11
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int resultNOToperationFun(int array[], int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int myArray[] = {5, 12, 8, 25, 10}, size = 0;

    // Calculate size of array.
    size = sizeof(myArray) / sizeof(myArray[0]);

    // Calling Functions.
    resultNOToperationFun(myArray, size);

    // Print array.
    printf("Update array after bitwise NOT operation:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", myArray[i]);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array And NOT Operation Program (Version 1) ..\n\n");
}

// Result NOT Operation - Function.
int resultNOToperationFun(int array[], int s)
{
    for (int i = 0; i < s; i++)
    {
        array[i] = ~array[i];
    }
}
//* End Function ..

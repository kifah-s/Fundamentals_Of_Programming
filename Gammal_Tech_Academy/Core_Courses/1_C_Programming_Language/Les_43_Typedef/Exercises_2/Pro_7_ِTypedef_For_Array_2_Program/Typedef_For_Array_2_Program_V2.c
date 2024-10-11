

//* Typedef For Array 2 Program (Version 2).

/*
 * Define a typedef for an array of characters named String.
 * Create a program that declares and prints the value of a String variable.
 */

/*
! Output:
! Hello, Typedef
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef char String[50];

void welcomeMessageFun();
void PrintValuesOfArrayFun(String x);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    String myArr = "Hello, Typedef";

    // Call Function.
    PrintValuesOfArrayFun(myArr);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Array 2 Program (Version 2) ..\n\n");
}

// Print Values Of Array - Function.
void PrintValuesOfArrayFun(String x)
{
    printf("%s", x);
}
//* End Function ..

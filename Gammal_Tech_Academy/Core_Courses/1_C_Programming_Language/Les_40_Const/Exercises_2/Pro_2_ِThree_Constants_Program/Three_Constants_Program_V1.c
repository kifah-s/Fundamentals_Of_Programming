

//* Three Constants Program (Version 1).

/*
 * Write a program that declares and initializes three
 * constants of different data types (integer, float, and
 * character). Print the values of these constants.
 */

/*
! Output:
! Integer constant : 5;
! Float constant : 3.14;
! Character constant : A;
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printConstantsFun(const int num1, const float num2, const char c);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    const int constantInteger = 5;
    const float constantFloat = 3.14;
    const char constantCharacter = 'A';

    // Call Function.
    printConstantsFun(constantInteger, constantFloat, constantCharacter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Constants Program (Version 1) ..\n\n");
}

// Print Constants - Function.
void printConstantsFun(const int num1, const float num2, const char c)
{
    printf("Integer constant: %d\n", num1);
    printf("Float constant: %0.2f\n", num2);
    printf("Character constant: %c", c);
}

//* End Function ..

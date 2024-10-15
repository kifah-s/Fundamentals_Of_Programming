

//* Check Value Program (Version 2).

/*
 * Write a program that initializes a boolean variable x with the value 5.
 * Check if the value of x is equal to true and print "yes" if true, otherwise print "no".
 */

/*
! Output:
! Yes.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void checkNumberFun(bool num);


int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    bool x = 5;

    // Call Functions.
    checkNumberFun(x);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check Value Program (Version 2) ..\n\n");
}

// Check Number - Function.
void checkNumberFun(bool num)
{
    if (num)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
//* End Function ..

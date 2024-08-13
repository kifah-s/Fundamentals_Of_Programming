

//* Found Omar Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, check if the name "Omar" is present in the array,
 * If it is found, print "found", otherwise, do nothing.
 */

/*
! Output:
! Found
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void foundOmarFun(char arr1[4][5]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][5] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    foundOmarFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Found Omar Program (Version 1) ..\n\n");
}

// Found Omar - Function.
void foundOmarFun(char arr1[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(arr1[i], "Omar") == 0)
        {
            printf("Found.");
            break;
        }
        
    }
}
//* End Function ..

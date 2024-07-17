

//* Password 2 Program (Version 1).

/*
 * Write a program to handle a more complex password scenario,
 * The program should reserve an integer variable named password,
 * Prompt the user to input the password..If the entered password matches either 12345 or 6789,
 * the program should print "Access granted." Otherwise, it should print "Access denied."
 */

/*
! Input:
! Please enter password: 6789

! Output:
! Access granted.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingPasswordFun(int pass);
void checkPasswordFun(int pass);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int password = 0;

    password = gettingPasswordFun(password);
    checkPasswordFun(password);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in password 2 Program (Version 1) ..\n\n");
}

// Getting password function.
int gettingPasswordFun(int pass)
{
    printf("Please enter password: ");
    scanf("%i", &pass);

    return pass;
}

// Check password function.
void checkPasswordFun(int pass)
{
    if (pass == 12345 || pass == 6789)
    {
        printf("\nAccess granted.");
    }
    else
    {
        printf("\nAccess denied.");
    }
}
//* End Function ..



//* Password Program (Version 1).

/*
 * Write a program that asks the user for a password,
 * If the user enters any number other than 12345, the program should ask again,
 * If the user enters 12345, the program should print "Password is correct",
 * using a do...while loop.
 */

/*
! Input:
! Please enter a password: 12345

! Output:
! Password is correct.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingPasswordFun(int pass);
void checkPasswordFun(int pass);

int main()
{
    welcomeMessageFun();

    // Declare Variable.
    int password = 0;

    checkPasswordFun(password);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Password Program (Version 1) ..\n\n");
}

// Getting Password / Function.
int gettingPasswordFun(int pass)
{
    printf("Please enter a password: ");
    scanf("%i", &pass);

    return pass;
}

// Check Password / Function.
void checkPasswordFun(int pass)
{
    do
    {
        pass = gettingPasswordFun(pass);

        if (pass != 12345)
        {
            printf("Invalid Password, Please try again.\n\n");
        }

    } while (pass != 12345);

    printf("\nPassword is correct.");
}
//* End Function ..

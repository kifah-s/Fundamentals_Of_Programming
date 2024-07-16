

//* Password Program (Version 1).

/*
 * Write a program that prompts the user to enter a password,
 * The program should reserve an integer variable named password,
 * The user is then prompted to input the password,
 * If the entered password matches the value 12345,
 * the program should print "Correct password." Otherwise, it should print "Wrong password."
 */

/*
! Input:
! Please enter password: 12345

! Output:
! Correct password.
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
    printf("\n\nYou welcome in password Program (Version 1) ..\n\n");
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
    if (pass == 12345)
    {
        printf("\nCorrect password");
    }
    else
    {
        printf("\nWrong password");
    }
}
//* End Function ..

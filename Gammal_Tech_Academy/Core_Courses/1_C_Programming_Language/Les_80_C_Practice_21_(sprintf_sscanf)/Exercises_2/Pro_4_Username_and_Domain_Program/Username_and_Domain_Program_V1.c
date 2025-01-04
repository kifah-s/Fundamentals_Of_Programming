

//* Username and Domain Program (Version 1).

/*
* Ask the user for a username and a domain, then create and print a complete email address.

! Input:
! Please enter user name: kifah
! Please enter domain: gmail.com

! Output:
! Email Addres: kifah@gmail.com
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char emailAdd[], char userN[], char dom[]);

int main()
{
    // Declare Variables.
    char emailAddres[100], userName[25], domin[25];

    // Call Functions.
    resultFun( emailAddres,  userName,  domin);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Username and Domain Program (Version 1) ..\n\n");
}

// Git User Name - Function.
void gitUserNameFun(char userN[])
{
    printf("Please enter user name: ");
    scanf("%s", userN);
}

// Git Domin - Function.
void gitDominFun(char dom[])
{
    printf("Please enter domin: ");
    scanf("%s", dom);
}

// Concatenated String - Function.
void concatenatedStringFun(char emailAdd[], char userN[], char dom[])
{
    sprintf(emailAdd, "Email Addres: %s@%s", userN, dom);
}

// Result - Function.
void resultFun(char emailAdd[], char userN[], char dom[])
{
    printWelcomeMessageFun();
    gitUserNameFun(userN);
    gitDominFun(dom);
    concatenatedStringFun(emailAdd, userN, dom);

    printf("\n%s\n\n", emailAdd);
}
//* End Function ..

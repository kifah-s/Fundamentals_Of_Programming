

//* Read an Email 2 Program (Version 1).

/*
* Write a program to read an email address, skip the '@' character, and extract the domain.

! Input:
! Email: kifah@gmail.com

! Output:
! UserName: kifah
! Domin: gmail.com
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printUserAndDominFun(char user[50], char dom[50]);

int main()
{
    // Declare Variables.
    char userName[50], domin[50];

    // Call Functions.
    printUserAndDominFun(userName, domin);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read an Email 2 Program (Version 1) ..\n\n");
}

// Read Email - Function.
void readEmailFun(char user[50], char dom[50])
{
    printf("Email: ");
    // scanf("%[^@]%*c%[^\n]", user, dom);
    scanf("%[^@]%*c", user);
    scanf("%[^\n]", dom);
}

// Print User and Domin - Function.
void printUserAndDominFun(char user[50], char dom[50])
{
    welcomeMessageFun();
    readEmailFun(user, dom);

    printf("\nUserName: %s\n", user);
    printf("Domin: %s\n\n", dom);
}
//* End Function ..

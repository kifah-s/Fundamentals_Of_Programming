

//* Student Program (Version 1).

/*
 * Create a program that defines a struct named Student,
 * with members name (string), cell (string), and videos (integer),
 * Prompt the user to enter their name, phone number (cell), and the number of videos they have watched,
 * Store the information in a struct variable and print a welcome message along with the entered details.
 */

/*
! Input:
! What is your name: kifah
! What is your phone number: 0998621421
! How many videos have you watched? 50

! Output:
! Hi kifah
! Phone Number: 0998621421
! Number of videos watched: 50
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Student
{
    char name[25], phoneNumber[25];
    int videos;
};
//* End Struct

void welcomeMessageFun();
void studentDetailsFun(struct Student s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Student stu1;

    // Calling Functions.
    studentDetailsFun(stu1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Student Program (Version 1) ..\n\n");
}

//  Student Details - Function.
void studentDetailsFun(struct Student s)
{
    printf("What is your name: ");
    scanf("%s", s.name);

    printf("What is your phone number: ");
    scanf("%s", s.phoneNumber);

    printf("How many videos have you watched? ");
    scanf("%d", &s.videos);

    printf("\nHi %s", s.name);
    printf("\nPhone Number: %s.", s.phoneNumber);
    printf("\nNumber of videos watched: %d", s.videos);
}

//* End Function ..



//* Student Program (Version 1).

/*
 * The given program uses a struct named student to store information about students,
 * including their name, cell number, and the number of videos they have watched.
 */

/*
! Input:
! 1:
! Name: kifah
! Cell: 0998621421
! Videos: 50

! 2:
! Name: Ali
! Cell: 00112233
! Videos: 20

! 3:
! Name: Omar
! Cell: 4455667788
! Videos: 50

! Output:
! 1:
! Name: kifah
! Cell: 0998621421
! Videos: 50

! 2:
! Name: Ali
! Cell: 00112233
! Videos: 20

! 3:
! Name: Omar
! Cell: 4455667788
! Videos: 50

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
void studentDetailsFun(struct Student students[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Student students[3];

    // Calling Functions.
    studentDetailsFun(students);

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
void studentDetailsFun(struct Student students[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("S %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Number: ");
        scanf("%s", students[i].phoneNumber);

        printf("Videos: ");
        scanf("%d", &students[i].videos);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nS %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Cell: %s\n", students[i].phoneNumber);
        printf("Videos: %d", students[i].videos);
    }
}

//* End Function ..

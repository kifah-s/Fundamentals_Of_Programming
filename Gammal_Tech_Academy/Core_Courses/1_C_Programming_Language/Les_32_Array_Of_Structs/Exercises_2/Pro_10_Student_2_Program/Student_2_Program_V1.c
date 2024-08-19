

//* Student 2 Program (Version 1).

/*
 * Create a program using a struct named Student to represent information about a student,
 * including their name and GPA. Initialize an array of 3 Student structures with some data and print their details.
 */

/*
! Output:
! Student 1:
! Name: kifah
! GPA: 3.50

! Student 2:
! Name: Ali
! GPA: 3.80

! Student 3:
! Name: Omar
! GPA: 3.20

*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Student
{
    char name[25];
    float gba;
};
//* End Struct

void welcomeMessageFun();
void studentDetailsFun(struct Student students[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Student students[3] = {
        {"Kifah", 3.50},
        {"Ali", 3.80},
        {"Omar", 3.20}};

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
        printf("\nStudent %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("GBA: %.02f\n", students[i].gba);
        
    }
}

//* End Function ..

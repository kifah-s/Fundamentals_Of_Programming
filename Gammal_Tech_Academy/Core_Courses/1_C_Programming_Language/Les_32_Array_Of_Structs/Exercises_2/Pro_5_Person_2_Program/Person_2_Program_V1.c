

//* Person 2 Program (Version 1).

/*
 * Create a program using a struct named Person to represent information about a person,
 * including their name and age. Ask the user to input data for two persons, then print their details.
 */

/*
! Input:
! Please enter details for person 1:
! Name: amr
! Age: 18

! Please enter details for person 2:
! Name: ali
! Age: 14

! Output:
! Details for person 1:
! Name: amr
! Age: 18

! Details for person 2:
! Name: ali
! Age: 14

*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Person
{
    char name[25];
    int age;
};
//* End Struct

void welcomeMessageFun();
void personDetailsFun(struct Person persons[2]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Person persons[3];

    // Calling Functions.
    personDetailsFun(persons);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Person 2 Program (Version 1) ..\n\n");
}

//  Persons Details - Function.
void personDetailsFun(struct Person persons[2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nPlease enter details for Person %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", persons[i].name);

        printf("Age: ");
        scanf("%d", &persons[i].age);
    }
    // Print Details.
    for (int i = 0; i < 2; i++)
    {
        printf("\nDetails for Person %d:\n", i + 1);

        printf("Name: %s\n", persons[i].name);
        printf("Age: %d\n", persons[i].age);
    }
}
//* End Function ..

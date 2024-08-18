

//* Person Program (Version 1).

/*
 * Create a program that uses a struct named Person to represent information about a person,
 * including their name and age,
 * Initialize an array of 3 Person structures with some data and print their details.
 */

/*
! Output:
! Person 1:
! Name: kifah
! Age: 25

! Person 2:
! Name: Ali
! Age: 28

! Person 3:
! Name: Omar
! Age: 35

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
void personDetailsFun(struct Person persons[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Person persons[3] = {{"kifah", 25},
                                {"Ali", 30},
                                {"Maram", 35}};
    // Calling Functions.
    personDetailsFun(persons);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Person Program (Version 1) ..\n\n");
}

//  Persons Details - Function.
void personDetailsFun(struct Person persons[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nPerson %d:\n", i + 1);

        printf("Name: %s\n", persons[i].name);
        printf("Age: %d\n", persons[i].age);
    }
}
//* End Function ..

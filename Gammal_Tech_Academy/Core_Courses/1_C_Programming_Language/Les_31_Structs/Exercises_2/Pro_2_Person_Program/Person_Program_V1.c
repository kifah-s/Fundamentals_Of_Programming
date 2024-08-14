

//* Person Program (Version 1).

/*
 * Write a program that defines a struct called Person,
 * with members name (string) and age (integer),
 * Create an instance of the struct, initialize its members, and print the values.
 */

/*
! Output:
! Name: kifah
! Age: 25
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Person
{
    char name[25];
    int Age;
};
//* End Struct

void welcomeMessageFun();
void printPersonDetailsFun(struct Person p);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Person per1;

    strcpy(per1.name, "kifah");
    per1.Age = 25;

    // Calling Functions.
    printPersonDetailsFun(per1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Person Program (Version 1) ..\n\n");
}

// Print Person Details - Function.
void printPersonDetailsFun(struct Person p)
{
    printf("Name: %s", p.name);
    printf("\nAge: %d", p.Age);
}

//* End Function ..

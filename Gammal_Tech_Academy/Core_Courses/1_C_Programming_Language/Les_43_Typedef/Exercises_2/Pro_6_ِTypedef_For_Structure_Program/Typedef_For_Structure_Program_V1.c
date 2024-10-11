

//* Typedef For Structure Program (Version 1).

/*
 * Define a typedef for a structure named Person with members age and gender.
 * Create a program that declares and prints the values of a Person variable.
 */

/*
! Output:
! Age: 25, Gender: M
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef struct
{
    int age;
    char gender;
} Person;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    Person person1 = {25, 'M'};

    printf("Age: %d, Gender: %c", person1.age, person1.gender);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Structure Program (Version 1) ..\n\n");
}

//* End Function ..

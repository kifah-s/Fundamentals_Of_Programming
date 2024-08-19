

//* Employee Program (Version 1).

/*
 * Create a program using a struct named Employee to represent information about an employee,
 * including their name and salary. Ask the user to input data for two employees, then print their details.
 */

/*
! Input:
! Please enter details for Employee 1:
! Name: ahmad
! Salary: 100000

! Please enter details for Employee 2:
! Name: ali
! Salary: 220000

! Output:
! Details for Employee 1:
! Name: ahmad
! Salary: 100000

! Details for Employee 2:
! Name: ali
! Salary: 220000
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Employee
{
    char name[25];
    int salary;
};
//* End Struct

void welcomeMessageFun();
void employeeDetailsFun(struct Employee e[2]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Employee emp[2];

    // Calling Functions.
    employeeDetailsFun(emp);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Employee Program (Version 1) ..\n\n");
}

//  Employee Details - Function.
void employeeDetailsFun(struct Employee e[2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nPlease enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%d", &e[i].salary);
    }
    // Print Details.
    for (int i = 0; i < 2; i++)
    {
        printf("\nDetails for Employee %d:\n", i + 1);

        printf("Name: %s\n", e[i].name);
        printf("Salary: %d\n", e[i].salary);
    }
}
//* End Function ..

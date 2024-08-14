

//* Employee Program (Version 1).

/*
 * Create a program that defines a struct called Employee with members name (string), id (integer),
 * and salary (float). Create an instance of the struct, initialize its members,
 * and print the employee information.
 */

/*
! Output:
! Employee information:
! Name: Alice
! ID: 101
! Salary: 55000.00 $
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Employee
{
    char name[25];
    int id;
    float salary;
};
//* End Struct

void welcomeMessageFun();
void employeeInformationFun(struct Employee e);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Employee emp1 = {"kifah", 101, 55000.00};

    // Calling Functions.
    employeeInformationFun(emp1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Employee Program (Version 1) ..\n\n");
}

//  Employee information - Function.
void employeeInformationFun(struct Employee e)
{
    printf("Employee information:\n\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %f$", e.salary);
}

//* End Function ..

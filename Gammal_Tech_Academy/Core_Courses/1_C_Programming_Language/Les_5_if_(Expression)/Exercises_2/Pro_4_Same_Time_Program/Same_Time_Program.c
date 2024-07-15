

//* Same Time Program.

/*
 * Write a program that prompts the user to enter two numbers.
 * The first represents the attendance time of the first employee,
 * and the second represents the attendance time of the second employee.
 * If the numbers are equal, print "same time"; otherwise, print "No bonus".
 */

/*
! Input:
! Enter attendance time for employee 1 and employee 2 ..
! attendance time for employee 1:
! attendance time for employee 2:

! Output:
! No bonus.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingAttendanceTimeEmployee1Fun(int timeEmp1);
int gettingAttendanceTimeEmployee2Fun(int timeEmp2);
void sameTimeOrNotBonusFun(int timeEmp1, int timeEmp2);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int attendanceTimeEmployee1 = 0, attendanceTimeEmployee2 = 0;

    attendanceTimeEmployee1 = gettingAttendanceTimeEmployee1Fun(attendanceTimeEmployee1);
    attendanceTimeEmployee2 = gettingAttendanceTimeEmployee2Fun(attendanceTimeEmployee2);
    sameTimeOrNotBonusFun(attendanceTimeEmployee1, attendanceTimeEmployee2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Same Time Program ..\n\n");
}

// Getting attendance time for employee 1 function.
int gettingAttendanceTimeEmployee1Fun(int timeEmp1)
{
    printf("please Enter attendance time for employee 1 and employee 2 ..\n");
    printf("Attendance time for employee 1: ");
    scanf("%i", &timeEmp1);

    return timeEmp1;
}

// Getting attendance time for employee 2 function.
int gettingAttendanceTimeEmployee2Fun(int timeEmp2)
{
    printf("Attendance time for employee 2: ");
    scanf("%i", &timeEmp2);

    return timeEmp2;
}

// Same time or not bonus function.
void sameTimeOrNotBonusFun(int timeEmp1, int timeEmp2)
{
    if (timeEmp1 == timeEmp2)
    {
        printf("\n\"Same time\".");
    }
    else
    {
        printf("\n\"No bonus\".");
    }
}
//* End Function ..



//* Student Score Program (Version 2).

/*
 * Write a program that categorizes a student's score into different ranges.
 */

/*
! Input:
! Please Enter the Student Score: 90

! Output:
! Grade A.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkGradeFun(int grade);

int main()
{
    // Declare Variables.
    int myGrade = 0;

    // Call Functions.
    checkGradeFun(myGrade);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Student Score Program (Version 2) ..\n\n");
}

// Receive Grade - Function.
int receiveGradeFun(int grade)
{
    printf("Please enter a Grade: ");
    scanf("%d", &grade);

    return grade;
}

// Check Grade - Function.
void checkGradeFun(int grade)
{
    welcomeMessageFun();
    grade = receiveGradeFun(grade);

    switch (grade)
    {
    case 90 ... 100:
        printf("\nGrade: A\n\n");
        break;

    case 80 ... 89:
        printf("\nGrade: B\n\n");
        break;

    case 70 ... 79:
        printf("\nGrade: C\n\n");
        break;

    case 60 ... 69:
        printf("\nGrade: D\n\n");
        break;

    case 50 ... 59:
        printf("\nGrade: E\n\n");
        break;

    default:
        break;
    }
}

//* End Function ..



//* Student Score Program (Version 1).

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
    printf("\n\nYou welcome in Student Score Program (Version 1) ..\n\n");
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

    if (grade <= 100 && grade >= 90)
    {
        printf("\nGrade: A\n\n");
    }
    else if (grade < 90 && grade >= 80)
    {
        printf("\nGrade: B\n\n");
    }
    else if (grade < 80 && grade >= 70)
    {
        printf("\nGrade: C\n\n");
    }
    else if (grade < 70 && grade >= 60)
    {
        printf("\nGrade: D\n\n");
    }
    else if (grade < 60 && grade >= 50)
    {
        printf("\nGrade: E\n\n");
    }
    
}

//* End Function ..

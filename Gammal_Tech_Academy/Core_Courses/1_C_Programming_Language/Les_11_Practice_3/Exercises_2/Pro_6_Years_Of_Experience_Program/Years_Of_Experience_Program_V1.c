

//* Years Of Experience Program (Version 1).

/*
 * Develop a C program that requests the user to enter an integer representing their years of experience,
 * If the provided number is between 2 and 5 (inclusive),
 * the program should display "You qualify for intermediate level positions",
 * If the number is greater than 5, it should print "You are eligible for senior level positions.",
 * Otherwise, if the number is less than 2, the program should output "Entry-level positions are suitable for you."
 */

/*
! Input:
! Please enter your years of experience: 3

! Output:
! You qualify for intermediate level positions.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingYearsFun(int y);
void yearsOfExperienceFun(int y);

int main()
{
    // Declare Variables.
    int yearsOfExperience = 0;

    yearsOfExperienceFun(yearsOfExperience);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Years Of Experience Program (Version 1) ..\n\n");
}

// Getting Years - Function.
int gettingYearsFun(int y)
{
    printf("Please enter your years of experience: ");
    scanf("%i", &y);

    return y;
}

// Years Of Experience - Function.
void yearsOfExperienceFun(int y)
{
    welcomeMessageFun();

    y = gettingYearsFun(y);

    if (y >= 2 && y <= 5)
    {
        printf("\nYou qualify for intermediate level positions.\n\n");
    }
    else if (y > 5)
    {
        printf("\nYou are eligible for senior level positions.\n\n");
    }
    else
    {
        printf("\nEntry-level positions are suitable for you.\n\n");
    }
}
//* End Function ..

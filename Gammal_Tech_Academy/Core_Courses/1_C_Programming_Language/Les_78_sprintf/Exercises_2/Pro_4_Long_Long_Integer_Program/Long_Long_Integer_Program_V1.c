

//* Long Long Integer Program (Version 1).

/*
* Write a program that takes a long long integer as input from the user and uses sprintf to format it.

! Input:
! Please enter a Large number: 123456789101112

! Output:
! Large number: 123456789101112
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(long long num, char myStr[]);

int main()
{
    // Declare Variables.
    long long number = 0;
    char myString[100];

    // Call Functions.
    resultFun(number, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Long Long Integer Program (Version 1) ..\n\n");
}

// Get Number - Function.
long long getNumberFun(long long num)
{
    printf("Please enter a long number: ");
    scanf("%lld", &num);

    return num;
}

// Convert To String - Function.
void convertToStringFun(long long num, char myStr[])
{
    sprintf(myStr, "Large number: %lld", num);
}

// Result - Function.
void resultFun(long long num, char myStr[])
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    convertToStringFun(num, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..

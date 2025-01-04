

//* Different Delimiters Program (Version 1).

/*
* Extracting Numbers with Different Delimiters from this string "10,20,30 Numbers with Commas"

! Output:
! Numbers: 10, 20, 30
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int num1, int num2, int num3);

int main()
{
    // Declare Variables.
    char myString[] = "10,20,30 Numbers with Commas";
    int number1 = 0, number2 = 0, number3 = 0;

    // Call Functions.
    resultFun(myString, number1, number2, number3);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Different Delimiters Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
void extractingNumberFun(char myStr[], int num1, int num2, int num3)
{
    sscanf(myStr, "%d, %d, %d", &num1, &num2, &num3);
    printf("Numbers: %d, %d, %d\n\n", num1, num2, num3);
}

// Result - Function.
void resultFun(char myStr[], int num1, int num2, int num3)
{
    printWelcomeMessageFun();
    extractingNumberFun(myStr, num1, num2, num3);
}
//* End Function ..

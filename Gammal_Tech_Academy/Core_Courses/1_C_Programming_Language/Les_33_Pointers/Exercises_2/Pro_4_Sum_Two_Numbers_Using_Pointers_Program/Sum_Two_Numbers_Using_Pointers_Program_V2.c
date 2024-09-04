

//* Sum Two Numbers Using Pointers Program (Version 2).

/*
 * Program to Find the Sum of Two Numbers Using Pointers.
 */

/*
! Input:
! Enter the first number: 5
! Enter the second number: 6

! Output:
! Sum: 11
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int x);
int gettingSecondNumberFun(int y);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, sum = 0;
    int *poi1, *poi2;

    // Calling Functions.
    num1 = gettingFirstNumberFun(num1);
    num2 = gettingSecondNumberFun(num2);

    poi1 = &num1;
    poi2 = &num2;

    sum = *poi1 + *poi2;

    printf("\nSum: %d", sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Two Numbers Using Pointers Program (Version 2) ..\n\n");
}

// Getting First number - Function.
int gettingFirstNumberFun(int x)
{
    printf("Please enter First number: ");
    scanf("%d", &x);

    return x;
}

// Getting Second number - Function.
int gettingSecondNumberFun(int y)
{
    printf("Please enter Second number: ");
    scanf("%d", &y);

    return y;
}
//* End Function ..

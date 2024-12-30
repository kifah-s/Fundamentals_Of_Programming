

//* Swap Numbers Program (Version 1).

/*
* Create a program with a function swapNumbers that takes two integer pointers as input and swaps the values they point to.
* In the main function, take two integers as input, call the swapNumbers function, and print the swapped values.

! Input:
! Please enter a first number: 5
! Please enter a second number: 7

! Output:
! Swapped Values:
! First number: 7
! Second number: 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int firNum, int secNum);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    // Call Functions.
    resultFun(firstNumber, secondNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Numbers Program (Version 1) ..\n\n");
}

// Get First Number - Function.
int getFirstNumberFun(int firNum)
{
    printf("Please enter a First number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Get Second Number - Function.
int getSecondNumberFun(int secNum)
{
    printf("Please enter a Second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Swap Numbers - Function.
int swapNumbersFun(int firNum, int secNum)
{
    int temp = firNum;
    firNum = secNum;
    secNum = temp;
    
    printf("\nSwapped Values:\n");
    printf("First number: %d\n", firNum);
    printf("Second number: %d\n\n", secNum);
}

// Result - Function.
void resultFun(int firNum, int secNum)
{
    printWelcomeMessageFun();
    firNum = getFirstNumberFun(firNum);
    secNum = getSecondNumberFun(secNum);
    swapNumbersFun(firNum, secNum);
}
//* End Function ..

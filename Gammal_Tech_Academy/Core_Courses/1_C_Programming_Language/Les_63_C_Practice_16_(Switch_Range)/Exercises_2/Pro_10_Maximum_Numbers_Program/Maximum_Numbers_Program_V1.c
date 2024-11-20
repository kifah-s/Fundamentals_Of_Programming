

//* Maximum Numbers Program (Version 1).

/*
 * Write a program that finds the maximum of three numbers.
/*
! Input:
! Please enter first number: 3
! Please enter second number: 6
! Please enter third number: 4

! Output:
! Maximum: 6
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkCharacterFun(int firNum, int secNum, int thiNum);

int main()
{
    // Declare Variables.
    char firstNum = 0, secondNum = 0, thirdNum = 0;

    // Call Functions.
    checkCharacterFun( firstNum,  secondNum,  thirdNum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Numbers Program (Version 1) ..\n\n");
}

// Receive First Number - Function.
int receiveFirstNumberFun(int firNum)
{
    printf("Please enter First Number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Receive Second Number - Function.
int receiveSecondNumberFun(int secNum)
{
    printf("Please enter Second Number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Receive Third Number - Function.
int receiveThirdNumberFun(int thiNum)
{
    printf("Please enter Third Number: ");
    scanf("%d", &thiNum);

    return thiNum;
}

// Check character - Function.
void checkCharacterFun(int firNum, int secNum, int thiNum)
{
    welcomeMessageFun();
    firNum = receiveFirstNumberFun(firNum);
    secNum = receiveSecondNumberFun(secNum);
    thiNum = receiveThirdNumberFun(thiNum);

    switch (firNum > secNum && firNum > thiNum)
    {
    case 1:
        printf("\nMaximum: %d\n\n", firNum);
        break;

    case 0:
        switch (secNum > firNum && secNum > thiNum)
        {
        case 1:
            printf("\nMaximum: %d\n\n", secNum);
            break;

        case 0:
            printf("\nMaximum: %d\n\n", thiNum);
            break;
        }
    }
}
//* End Function ..

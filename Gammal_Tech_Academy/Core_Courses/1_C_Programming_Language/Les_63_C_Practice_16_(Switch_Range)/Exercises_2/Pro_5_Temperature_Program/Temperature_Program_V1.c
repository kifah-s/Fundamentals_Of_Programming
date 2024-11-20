

//* Temperature Program (Version 1).

/*
 * Write a program that categorizes a given temperature into different ranges (cold, mild, hot).
/*
! Input:
! Please Enter the Temperature: -9

! Output:
! Cold
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkTemperatureFun(int temp);

int main()
{
    // Declare Variables.
    int temperature = 0;

    // Call Functions.
    checkTemperatureFun(temperature);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Temperature Program (Version 1) ..\n\n");
}

// Receive Temperature - Function.
int receiveTemperatureFun(int temp)
{
    printf("Please enter a Temperature: ");
    scanf("%d", &temp);

    return temp;
}

// Check Number - Function.
void checkTemperatureFun(int temp)
{
    welcomeMessageFun();
    temp = receiveTemperatureFun(temp);

    if (temp > 10 && temp <= 25)
    {
        printf("\nMild\n\n");
    }
    else if (temp > 25)
    {
        printf("\nHot\n\n");
    }
    else
    {
        printf("\nCold\n\n");
    }
}

//* End Function ..

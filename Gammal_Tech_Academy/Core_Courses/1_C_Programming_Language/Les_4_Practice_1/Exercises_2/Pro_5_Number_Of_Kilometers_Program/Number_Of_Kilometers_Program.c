

//* Number Of Kilometers Program.

//* Write a program that asks the user for the number of liters of gasoline, calculates the number of kilometers the car can travel without refueling (assuming 23 km per liter), and prints it.

/*
! Input:
! Please enter the number of liters of gasoline: 2

! Output:
! The car can travel 46 kilometers without refueling.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberOfLitersFun(int lit);
void calcKilometersFun(int lit, int kilo);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int liters = 0, kilometers = 0;

    liters = gettingNumberOfLitersFun(liters);
    calcKilometersFun(liters, kilometers);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Kilometers Program ..\n\n");
}

// Getting number of liters Function.
int gettingNumberOfLitersFun(int lit)
{
    printf("Please enter the number of liters of gasoline: ");
    scanf("%i", &lit);

    return lit;
}

// calc Kilometers Function.
void calcKilometersFun(int lit, int kilo)
{
    kilo = lit * 23;
    printf("\nThe car can travel %i kilometers without refueling.", kilo);
}

//* End Function ..

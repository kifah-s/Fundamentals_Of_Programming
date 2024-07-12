

//* Subscription Balance Program.

//* Write a program that asks the user for their monthly subscription balance and its consumption in the current month and prints the new balance.

/*
! Input:
! Enter the monthly subscription balance: 100
! Enter the consumption in the current month: 50

! Output:
! New balance: 50
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingMonthlySubscriptionBalanceFun(int bal);
int gettingConsumptionCurrentMonthFun(int con);
void calculatingNewBalanceFun(int bal, int con, int newBal);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int monthlySubscriptionBalance = 0, consumptionCurrentMonth = 0, newBalance = 0;

    monthlySubscriptionBalance = gettingMonthlySubscriptionBalanceFun(monthlySubscriptionBalance);
    consumptionCurrentMonth = gettingConsumptionCurrentMonthFun(consumptionCurrentMonth);
    calculatingNewBalanceFun(monthlySubscriptionBalance, consumptionCurrentMonth, newBalance);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in subscription balance Program ..\n\n");
}

// Getting monthly subscription balance Function.
int gettingMonthlySubscriptionBalanceFun(int bal)
{
    printf("Please Enter the monthly subscription balance: ");
    scanf("%i", &bal);

    return bal;
}

// Getting consumption current month Function.
int gettingConsumptionCurrentMonthFun(int con)
{
    printf("Please Enter the consumption in the current month: ");
    scanf("%i", &con);

    return con;
}

// Calculating New Balance function.
void calculatingNewBalanceFun(int bal, int con, int newBal)
{
    newBal = bal - con;
    printf("\nNew balance: %i", newBal);
}

//* End Function ..

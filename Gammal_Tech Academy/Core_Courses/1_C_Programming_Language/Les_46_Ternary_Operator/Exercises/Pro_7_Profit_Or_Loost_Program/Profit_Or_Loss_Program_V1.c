

/* >>> Profit Or Loss Program ( Version 1 ) <<< */

/* >>> A program that requires a person to enter two numbers, the first expresses the value of the initial money and the second expresses the total money after a month and calculates the value of the difference and if the profit prints "profit =.... "And if the loss prints" loss =...... "(using the Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int currentMoneyFun();
int moneyAfterMonthFun();
bool profitOrLossFun(int currentMoney, int moneyAfterMonth);

int main()
{
    welcomeMassageFun();

    int currentMoney = currentMoneyFun();
    int moneyAfterMonth = moneyAfterMonthFun();

    profitOrLossFun(currentMoney, moneyAfterMonth);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Profit Or Loss Program ( Version 1 ) ..\n\n");
}

// current money function;
int currentMoneyFun()
{
    int currentMoney = 0;
    printf("Please enter current money : ");
    scanf("%d", &currentMoney);

    return currentMoney;
}

// money after month function;
int moneyAfterMonthFun()
{
    int moneyAfterMonth = 0;
    printf("Please enter money after month : ");
    scanf("%d", &moneyAfterMonth);

    return moneyAfterMonth;
}

// Profit or loss function;
bool profitOrLossFun(int currentMoney, int moneyAfterMonth)
{
    int difference = moneyAfterMonth - currentMoney;

    difference > 0 ? printf("\nProfit ...\n\n") : printf("\nLoss ...\n\n");
}


/* >>> Profit And Loss Program ( Version 4 ) <<< */

/* >>> A program for traders, requires a person to enter two different numbers the first expressing the value of the initial money and the second expressing the total money after a month and calculating the value of the difference, if the profit prints "profit =.... "And if the loss prints" loss =...... " <<< */

#include <stdio.h>

void welcomeMassageFun();
int amountOfMoneyFunction();
int amountOfMoneyAfterMonthFunction();
int differenceFunction();

int main()
{
    welcomeMassageFun();

    differenceFunction();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Profit And Loss Program ( Version 4 ) ..\n\n");
}

// amount of money function;
int amountOfMoneyFunction()
{
    int amountMoney;
    printf("Please, enter the amount of money : ");
    scanf("%d", &amountMoney);
    return amountMoney;
}

// amount of money after month function;
int amountOfMoneyAfterMonthFunction()
{
    int afterMonth;
    printf("Please, enter the amount of money after month : ");
    scanf("%d", &afterMonth);
    return afterMonth;
}

// difference function;
int differenceFunction()
{
    int amountMoney = amountOfMoneyFunction();
    int afterMonth = amountOfMoneyAfterMonthFunction();

    int difference = afterMonth - amountMoney;

    if (difference >= 0)
    {
        printf("\nProfit = %d\n\n\n", difference);
    }
    else
    {
        printf("\nLoss = %d\n\n\n", difference);
    }
}
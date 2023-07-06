

/* >>> Profit And Loss Program ( Version 2 ) <<< */

/* >>> A program for traders, requires a person to enter two different numbers the first expressing the value of the initial money and the second expressing the total money after a month and calculating the value of the difference, if the profit prints "profit =.... "And if the loss prints" loss =...... " <<< */

#include <stdio.h>

void welcomeMassageFun();
int profitAndLossFunction();

int main()
{
    welcomeMassageFun();
    profitAndLossFunction();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Profit And Loss Program ( Version 2 ) ..\n\n");
}

// Profit and loss function;
int profitAndLossFunction()
{
    int m_month, a_month, difference;

    printf("Please, enter the amount of money : ");
    scanf("%d", &m_month);

    printf("Please, enter the amount of money after month : ");
    scanf("%d", &a_month);

    difference = a_month - m_month;

    if (difference >= 0)
    {
        printf("\nProfit = %d\n\n\n", difference);
    }
    else
    {
        printf("\nLoss = %d\n\n\n", difference);
    }
}
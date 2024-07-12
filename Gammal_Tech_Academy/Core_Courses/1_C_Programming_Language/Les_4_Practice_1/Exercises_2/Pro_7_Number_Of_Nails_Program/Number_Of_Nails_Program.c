

//* Number Of Nails Program.

//* Write a program that asks the user for the number of chairs and tables they want to make and prints the total number of nails needed ,chair need 25 nails tables need 30 nails.

/*
! Input:
! Enter a number of chair: 2
! Enter the number of tables: 3

! Output:
! Total nails needed: 140
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingChairsNumberFun(int cha);
int gettingTablesNumberFun(int tab);
void calculatingTotalNailsFun(int cha, int tab, int totNai);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int chairsNumber = 0, tablesNumber = 0, totalNails = 0;

    chairsNumber = gettingChairsNumberFun(chairsNumber);
    tablesNumber = gettingTablesNumberFun(tablesNumber);
    calculatingTotalNailsFun(chairsNumber, tablesNumber, totalNails);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Nails Program ..\n\n");
}

// Getting chairs Number Function.
int gettingChairsNumberFun(int cha)
{
    printf("Please enter a number of chair: ");
    scanf("%i", &cha);

    return cha;
}

// Getting tables Number Function.
int gettingTablesNumberFun(int tab)
{
    printf("Please enter a number of Table: ");
    scanf("%i", &tab);

    return tab;
}

// calculating total nails function.
void calculatingTotalNailsFun(int cha, int tab, int totNai)
{
    totNai = (cha * 25) + (tab * 30);
    printf("\nTotal nails needed: %i", totNai);
}

//* End Function ..

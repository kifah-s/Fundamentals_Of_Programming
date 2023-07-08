

/* >>> Smaller Than 15 Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15  and sum this numbers (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int smallerThan15();

int main()
{
    welcomeMassageFun();
    smallerThan15();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Smaller Than 15 Program ( Version 4 ) ..\n\n");
}

// Smaller Than 15 function;
int smallerThan15()
{
    int i = 1, sum = 0, num;

    printf("Please enter number smaller than 15 : ");
    scanf("%d", &num);

    while (num > 15)
    {
        printf("Please enter number smaller than 15 : ");
        scanf("%d", &num);
    }

    while (i <= num)
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;
    }
    printf("\n\nResult Sum numbers from 1 to %d = %d", num, sum);
    printf("\n\n\n");
}
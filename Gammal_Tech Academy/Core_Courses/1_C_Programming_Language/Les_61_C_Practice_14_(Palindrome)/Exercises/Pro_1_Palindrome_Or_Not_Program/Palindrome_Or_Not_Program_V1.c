

/* >>> Palindrome Or Not Program ( Version 1 ) <<< */

/* >>> Program that asks the user to enter a number, and prints this number reversed. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void palindromeOrNotFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    palindromeOrNotFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Palindrome Or Not Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Palindrome Or Not / function;
void palindromeOrNotFun(int number)
{
    int num = 0, x = number;
    while (number > 0)
    {
        num = num * 10 + number % 10;
        number /= 10;
    }
    if (num == x)
    {
        printf("\nYes, this number is palindrome\n\n");
    }
    else
    {
        printf("\nNO, this number is Not palindrome\n\n");
    }
}

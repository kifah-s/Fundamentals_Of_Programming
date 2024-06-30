

/* >>> Number Properties Program ( Version 4 ) <<< */

/* >>> A program containing array of different numbers and requesting the user to enter a number.. If the number is not in the array prints not found and if it exists prints found and prints this number characteristics like the previous examples. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
int foundOrNotFoundFun(int number, int arr[]);
int positiveOrNegativeNumFun(int number);
int evenOrOddNumFun(int number);
int DigitNumberNumFun(int number);
int PrimeOrNotFun(int number);
int palindromeFun(int number);

int main()
{
    welcomeMassageFun();
    
    kifah:

    int arr[] = {123, -222, 2332, 55555, 7878, 1, 11, 9889, -17, 5, 0/* Number 0 indicates the end of the array */};

    int number = getNumberFun(number);

    foundOrNotFoundFun(number, arr);

    goto kifah;

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Properties Program ( Version 4 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Found Or not Found number / function;
int foundOrNotFoundFun(int number, int arr[])
{
    bool found = false;
    for (int i = 0; arr[i] != 0 /* arr[i] */ /* Error : i < arr[i]*/; i++)
    {
        if (number == arr[i])
        {
            found = true;
        }
    }
    if (found == true)
    {
        printf("\nYes, i found number and this is Number Properties : \n\n");
        positiveOrNegativeNumFun(number);
        evenOrOddNumFun(number);
        DigitNumberNumFun(number);
        PrimeOrNotFun(number);
        palindromeFun(number);
    }
    else
    {
        printf("\nNo, i dont find number\n\n");
    }
}

// Positive or negative number / function;
int positiveOrNegativeNumFun(int number)
{
    if (number > 0)
    {
        printf("The number \" %d \" is positive\n", number);
    }
    else if (number < 0)
    {
        printf("The number \" %d \" is negative\n", number);
    }
    else
    {
        printf("Zero\n");
    }
}

// Even Or Odd number / function;
int evenOrOddNumFun(int number)
{
    if (number % 2 == 0)
    {
        printf("The number \" %d \" is even\n", number);
    }
    else
    {
        printf("The number \" %d \" is Odd\n", number);
    }
}

// Digit Number number / function;
int DigitNumberNumFun(int number)
{
    int counter = 0;
    while (number /* number > 0 */)
    {
        number /= 10;
        counter++;
    }
    printf("Digit Number = %d\n", counter);
}

// Prime Or Not / function;
int PrimeOrNotFun(int number)
{
    bool primeOrNot = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            primeOrNot = false;
            break;
        }
    }

    if (primeOrNot == true)
    {
        printf("The number \" %d \" is Prime\n", number);
    }
    else
    {
        printf("The number \" %d \" is Not prime\n", number);
    }
}

// Palindrome / function;
int palindromeFun(int number)
{
    int y = 0, z = number;
    while (number != 0)
    {
        y = y * 10 + number % 10; // Access to the last digit in the number.
        number /= 10;             //  Access to the first digit in the number.
    }

    if (y == z)
    {
        printf("The number \" %d \" is Palindrome\n\n", z);
    }
    else
    {
        printf("The number \" %d \" is Not palindrome\n\n", z);
    }
}


//* Two Numbers Program (Version 1).

/*
* Write a program that takes two numbers as input and writes their sum to a file named "sum.txt."

! Input:
! Please enter a first number: 5
! Please enter a second number: 7

! Output:
! Sum of numbers: 12
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(int firNum, int secNum, int sum, FILE *f);

int main()
{
    // Declare Variables.
    FILE *file;
    int firstNumber = 0, secondNumber = 0, sum = 0;

    // Call Functions.
    ResultFun(firstNumber, secondNumber, sum, file);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Numbers Program (Version 1) ..\n\n");
}

// Receive First Number - Function.
int receiveFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Receive Second Number - Function.
int receiveSecondNumberFun(int secNum)
{
    printf("Please enter a second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Calculate Sum - Function.
int calculateSumFun(int firNum, int secNum, int sum)
{
    sum = firNum + secNum;

    return sum;
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *f, int sum)
{
    // Create File.
    f = fopen("sum.txt", "w");

    // Write In File.
    fprintf(f, "Sum of numbers: %d", sum);

    // Close File.
    fclose(f);
}

// Result - Function.
void ResultFun(int firNum, int secNum, int sum, FILE *f)
{
    welcomeMessageFun();
    firNum = receiveFirstNumberFun(firNum);
    secNum = receiveSecondNumberFun(secNum);
    sum = calculateSumFun(firNum, secNum, sum);
    createAndWriteInFileFun(f, sum);
}

//* End Function ..



/* >>> 3 Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter three numbers and print the largest in them (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int getThirdNumberFun();
void largestFun(int firstNum, int secondNum, int thirdNum);

int main()
{
    welcomeMassageFun();

    int firstNum = getFirstNumberFun();
    int secondNum = getSecondNumberFun();
    int thirdNum = getThirdNumberFun();
    
    largestFun( firstNum, secondNum, thirdNum);
    
    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 3 Numbers Program ( Version 2 ) ..\n\n");
}

// Get first number function;
int getFirstNumberFun()
{
    int firstNum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    return firstNum;
}

// Get second number function;
int getSecondNumberFun()
{
    int secondNum = 0;

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    return secondNum;
}

// Get third number function;
int getThirdNumberFun()
{
    int thirdNum = 0;

    printf("Please enter third number : ");
    scanf("%d", &thirdNum);

    return thirdNum;
}

// largest function;
void largestFun(int firstNum, int secondNum, int thirdNum)
{
    firstNum > secondNum &&firstNum > thirdNum ? printf("\nLargest : %d\n\n", firstNum) : 0;
    secondNum > firstNum &&secondNum > thirdNum ? printf("\nLargest : %d\n\n", secondNum) : 0;
    thirdNum > firstNum &&thirdNum > secondNum ? printf("\nLargest : %d\n\n", thirdNum) : 0;
}
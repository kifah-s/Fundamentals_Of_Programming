

/* >>> Exam Score Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter an exam score, if the score equals 50%, write it (F), and if between 50 and 60, write it (D), and if between 60 and 70, write it (C), and if it is between 70 and 75 it is written ( 85) And if it is between 85 and 100, write it (A) if anything other than this, write it "error" (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void examScoreFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);

    examScoreFun(number);

    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Exam Score Program ( Version 2 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter exam score: ");
    scanf("%d", &number);

    return number;
}

// Exam Score / function;
void examScoreFun(int number)
{
    switch (number)
    {
    case 0 ... 50:
        printf("\nF\n\n");
        break;

    case 51 ... 60:
        printf("\nD\n\n");
        break;

    case 61 ... 70:
        printf("\nC\n\n");
        break;

    case 71 ... 80:
        printf("\nB\n\n");
        break;

    case 81 ... 100:
        printf("\nA\n\n");
        break;

    default:
        printf("\nPlease enter number between 0 and 100\n\n");
        break;
    }
}
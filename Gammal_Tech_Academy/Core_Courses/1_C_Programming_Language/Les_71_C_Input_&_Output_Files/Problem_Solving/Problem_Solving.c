//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void printDigit(int digit, int row)
{
    char digits[10][5][4] = {
        {" _ ", "| |", "|_|", " ", " "}, // 0
        {" ", " |", " |", " ", " "},     // 1
        {" _ ", " _|", "|_ ", " ", " "}, // 2
        {" _ ", " _|", " _|", " ", " "}, // 3
        {" ", "|_|", " |", " ", " "},    // 4
        {" _ ", "|_ ", " _|", " ", " "}, // 5
        {" _ ", "|_ ", "|_|", " ", " "}, // 6
        {" _ ", " |", " |", " ", " "},   // 7
        {" _ ", "|_|", "|_|", " ", " "}, // 8
        {" _ ", "|_|", " _|", " ", " "}, // 9
    };
    printf("%s", digits[digit][row]);
}

void printNumber(int n)
{
    int digits[5], i, j;

    for (i = 4; i >= 0; --i)
    {
        digits[i] = n % 10;
        n /= 10;
    }

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            printDigit(digits[j], i);
            if (j != 4)
                printf(" ");
        }
        printf("\n");
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int number;
    scanf("%d", &number);
    printNumber(number);

    printf("\n\n");

    return 0;
}
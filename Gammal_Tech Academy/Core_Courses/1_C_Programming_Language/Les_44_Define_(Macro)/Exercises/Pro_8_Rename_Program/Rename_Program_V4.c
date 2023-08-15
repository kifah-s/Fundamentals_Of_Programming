

/* >>> Rename Program ( Version 4 ) <<< */

/* >>> A program that uses the previous (new, de) commands and remains in its function: it reads two numbers from the user if the first is smaller than the second, prints to it the numbers from the first number to the second number, and if the opposite, it prints the numbers from the first to the second term in response to print their total in both cases. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_home main
#define gammal_num int
#define gammal_loop for
#define gammal_cond if
#define gammal_show printf
#define gammal_read scanf
#define gammal_r return 0
#define r return

void welcomeMassageFun();
gammal_num *getNumbersFun();
void printAndSumNumbersFun(gammal_num num1, gammal_num num2);

gammal_num gammal_home()
{
    welcomeMassageFun();

    gammal_num *num = getNumbersFun();

    printAndSumNumbersFun(num[0], num[1]);

    gammal_r;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    gammal_show("\n\nYou welcome in Rename Program ( Version 4 ) ..\n\n");
}

// Get numbers function;
gammal_num *getNumbersFun()
{
    static gammal_num num[2] = {0, 0};

    gammal_show("please enter first number : ");
    gammal_read("%d", &num[0]);

    gammal_show("please enter second number : ");
    gammal_read("%d", &num[1]);

    r num;
}

// Print and sum numbers function;
void printAndSumNumbersFun(gammal_num num1, gammal_num num2)
{
    gammal_num sum = 0;

    gammal_cond(num1 > num2)
    {
        gammal_loop(gammal_num i = num1; i >= num2; i--)
        {
            gammal_show("%d\n", i);
            sum = sum + i;
        }
        gammal_show("\nSum numbers from first number to last number = %d ", sum);
        gammal_show("\n\n");
    }
    gammal_cond(num1 < num2)
    {
        gammal_loop(gammal_num i = num1; i <= num2; i++)
        {
            gammal_show("%d\n", i);
            sum = sum + i;
        }
        gammal_show("\nSum numbers from first number to last number = %d ", sum);
        gammal_show("\n\n");
    }
}
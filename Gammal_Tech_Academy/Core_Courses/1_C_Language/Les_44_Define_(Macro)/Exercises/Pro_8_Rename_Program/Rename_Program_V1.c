

/* >>> Rename Program ( Version 1 ) <<< */

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

gammal_num gammal_home()
{
    gammal_show("\n\nYou welcome in Rename Program ( Version 1 ) ..\n\n");

    gammal_num num1 = 0, num2 = 0, sum = 0;
    gammal_show("please enter first number : ");
    gammal_read("%d", &num1);

    gammal_show("please enter second number : ");
    gammal_read("%d", &num2);

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

    gammal_r;
}
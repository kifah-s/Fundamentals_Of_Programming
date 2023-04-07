#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input " number_1 "
    int number_1 = get_int("What is your number_1 ? ");
    int number_2 = get_int("What is your number_2 ? ");

    // check number largest
    if (number_1 > number_2)
    {
        printf("number_1 is the largest number\n");
    }
    else if(number_1 < number_2)
    {
       printf("number_2 is the largest number\n");
    }
    else
    {
        printf("The two numbers are equal\n");
    }

}
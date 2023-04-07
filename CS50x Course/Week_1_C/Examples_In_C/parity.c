#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input " number "
    int number = get_int("What is your number ? ");

    // check number even or odd
    if (number % 2 == 0)
    {
        printf("this number is Even\n");
    }
    else
    {
       printf("this number is Odd\n");
    }

}
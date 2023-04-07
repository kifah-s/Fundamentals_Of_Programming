 #include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input " prise "
    float prise = get_float("What is your prise ? ");

    // Commission calculation
    prise = prise * 1.15;

    // Print total
    printf("total is: %f \n", prise);

}
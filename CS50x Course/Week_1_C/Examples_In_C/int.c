#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input " Age "
    int age = get_int("What is your Age ? ");

    // Convert age to days
    age = age * 365;

    // Print age in days
    printf("Age in days: %d d\n", age);

    // Convert age to hours
    age = age * 24;

    // Print age in hours
    printf("Age in hours: %d h\n", age);
}
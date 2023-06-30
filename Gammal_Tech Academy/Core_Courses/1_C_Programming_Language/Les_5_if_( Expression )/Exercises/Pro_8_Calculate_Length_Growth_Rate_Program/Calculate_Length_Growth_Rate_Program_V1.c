

/* >>> Calculate Length Growth Rate Program ( Version 1 ) <<< */

/* >>> Calculate Length Growth Rate Program : Rowan is a student on the Gammal Tech website who started learning programming at 13 and a year later became an intern at Gammal Tech at 14.
Required : Type a program that asks the user to enter the first two numbers expressing current length and the second expressing length a year ago, and then prints the growth value on the screen, if the length this year is greater than the previous year prints "taller than last year" and if it does not change print "same tall". (Growth rate equal to length difference) <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Calculate Length Growth Rate Program ( Version 1 ) ..\n\n");

    int length_now, length_year, growth_rate;

    printf("\nEnter a number for your length now ? ");
    scanf("%d", &length_now);

    printf("Enter a number for your length year ago ? ");
    scanf("%d", &length_year);

    growth_rate = length_now - length_year;

    printf("\nGrowth rate is : %d cm\n", growth_rate);

    if (length_now > length_year)
    {
        printf("\nYou are taller of year ago\n\n\n");
    }
    else
    {
        printf("\nYour height equal of year ago\n\n\n");
    }

    return 0;
}
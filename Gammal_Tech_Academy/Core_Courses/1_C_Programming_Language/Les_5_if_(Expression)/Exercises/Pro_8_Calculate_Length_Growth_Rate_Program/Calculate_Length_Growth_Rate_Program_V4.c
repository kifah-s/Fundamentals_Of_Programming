

/* >>> Calculate Length Growth Rate Program ( Version 4 ) <<< */

/* >>> Calculate Length Growth Rate Program : Rowan is a student on the Gammal Tech website who started learning programming at 13 and a year later became an intern at Gammal Tech at 14.
Required: Type a program that asks the user to enter the first two numbers expressing current length and the second expressing length a year ago, and then prints the growth value on the screen, if the length this year is greater than the previous year prints "taller than last year" and if it does not change print "same tall". (Growth rate equal to length difference) <<< */

#include <stdio.h>

void welcomeMassageFun();
int lengthNowFun();
int lengthYearFun();
int growthRateFun(int lengthNow, int lengthYear);
int calculateFun(int growthRate);

int main()
{
    welcomeMassageFun();

    int lengthNow = lengthNowFun();
    int lengthYear = lengthYearFun();
    int growthRate = growthRateFun(lengthNow, lengthYear);
    calculateFun(growthRate);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Calculate Length Growth Rate Program ( Version 4 ) ..\n\n");
}

// length now function;
int lengthNowFun()
{
    int lengthNow;
    printf("\nEnter a number for your length now ? ");
    scanf("%d", &lengthNow);
    return lengthNow;
}

// length year function;
int lengthYearFun()
{
    int lengthYear;
    printf("\nEnter a number for your length Year ? ");
    scanf("%d", &lengthYear);
    return lengthYear;
}

// growthRate function;
int growthRateFun(int lengthNow, int lengthYear)
{
    int growthRate = lengthNow - lengthYear;
    printf("\nGrowth rate is : %d cm\n", growthRate);
    return growthRate;
}

// Calculate function;
int calculateFun(int growthRate)
{

    if (growthRate > 0)
    {
        printf("\nYou are taller of year ago\n\n\n");
    }
    else
    {
        printf("\nYour height equal of year ago\n\n\n");
    }
}
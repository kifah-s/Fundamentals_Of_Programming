

/* >>> Daily Planning Program ( Version 2 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

void welcome_massage();
void daily_program();

int main()
{
    welcome_massage();
    daily_program();

    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage()
{
    printf("\n\nYou welcome in Daily Planning Program ( Version 2 ) ..\n\n");
}

// Daily program function;
void daily_program()
{
    printf("My daily program is : \n");
    printf("1 - University study from 5 am to 7 am.\n");
    printf("2 - English study from 7 am to 9 am.\n");
    printf("3 - study and work in programing from 9 am to 5 pm.\n");
    printf("4 - go to the gym from 5 pm to 7 pm.\n");
    printf("5 - this is my private time from 7 pm to 10 pm.\n");
    printf("6 - this is sleeping time 10 pm.\n");
    printf("and happy dreams\n\n\n");
}



/* >>> Daily Planning Program ( Version 4 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

void welcome_massage(char welcome_massage[]);
void daily_program(char program[]);

int main()
{
    welcome_massage("\n\nYou welcome in Daily Planning Program ( Version 4 ) ..\n\n");

    daily_program("My daily program is : \n");
    daily_program("1 - University study from 5 am to 7 am.\n");
    daily_program("2 - English study from 7 am to 9 am.\n");
    daily_program("3 - study and work in program from 9 am to 5 pm.\n");
    daily_program("4 - go to the gym from 5 pm to 7 pm.\n");
    daily_program("5 - this is my private time from 7 pm to 10 pm.\n");
    daily_program("6 - this is sleeping time 10 pm.\n");
    daily_program("and happy dreams\n\n\n");

    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char welcome_massage[])
{
    printf("%s", welcome_massage);
}

// Daily program function;
void daily_program(char program[])
{
    printf("%s", program);
    
}


/* >>> Daily Planning Program ( Version 3 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

void welcome_massage(char welcome_massage[]);
void daily_program(char daily_program[], char university[], char english[], char program[], char gym[], char private[], char sleeping[], char dreams[]);

int main()
{
    welcome_massage("\n\nYou welcome in Daily Planning Program ( Version 3 ) ..\n\n");

    daily_program("My daily program is : \n", "1 - University study from 5 am to 7 am.\n", "2 - English study from 7 am to 9 am.\n", "3 - study and work in program from 9 am to 5 pm.\n", "4 - go to the gym from 5 pm to 7 pm.\n", "5 - this is my private time from 7 pm to 10 pm.\n", "6 - this is sleeping time 10 pm.\n", "and happy dreams\n\n\n");

    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char welcome_massage[])
{
    printf("%s", welcome_massage);
}

// Daily program function;
void daily_program(char daily_program[], char university[], char english[], char program[], char gym[], char private[], char sleeping[], char dreams[])
{
    printf("%s", daily_program);
    printf("%s", university);
    printf("%s", english);
    printf("%s", program);
    printf("%s", gym);
    printf("%s", private);
    printf("%s", sleeping);
    printf("%s", dreams);
}
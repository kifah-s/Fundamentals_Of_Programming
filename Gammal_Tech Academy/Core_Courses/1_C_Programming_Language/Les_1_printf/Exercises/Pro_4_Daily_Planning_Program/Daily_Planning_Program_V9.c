

/* >>> Daily Planning Program ( Version 9 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

char *welcome_massage(char welcome[]);
char *daily_program(char program[]);

int main()
{
    char welcome[] = {"\n\nYou welcome in Daily Planning Program ( Version 9 ) ..\n\n"};
    char *wel[] = {welcome_massage(welcome)};
    printf(*wel);

    char program[] = {"My daily program is : \n"};
    char *pro[] = {daily_program(program)};
    printf(*pro);

    char university[] = {"1 - University study from 5 am to 7 am.\n"};
    char *uni[] = {daily_program(university)};
    printf(*uni);

    char english[] = {"2 - English study from 7 am to 9 am.\n"};
    char *eng[] = {daily_program(english)};
    printf(*eng);

    char programming[] = {"3 - study and work in program from 9 am to 5 pm.\n"};
    char *gra[] = {daily_program(programming)};
    printf(*gra);

    char gym[] = {"4 - go to the gym from 5 pm to 7 pm.\n"};
    char *g[] = {daily_program(gym)};
    printf(*g);

    char private[] = {"5 - this is my private time from 7 pm to 10 pm.\n"};
    char *pri[] = {daily_program(private)};
    printf(*pri);

    char sleeping[] = {"6 - this is sleeping time 10 pm.\n"};
    char *sle[] = {daily_program(sleeping)};
    printf(*sle);

    char dreams[] = {"and happy dreams\n\n\n"};
    char *dre[] = {daily_program(dreams)};
    printf(*dre);

    return 0;
}

// Functions ..

// Welcome massage function;
char *welcome_massage(char welcome[])
{
    /* printf("%s", welcome); */
    return welcome;
}

// Daily program function;
char *daily_program(char program[])
{
    /* printf("%s", program); */
    return program;
}
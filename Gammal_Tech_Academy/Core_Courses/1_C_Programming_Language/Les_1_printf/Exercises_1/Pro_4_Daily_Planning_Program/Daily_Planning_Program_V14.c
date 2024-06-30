

/* >>> Daily Planning Program ( Version 14 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

char *welcome_massage(char welcome[]);
char *daily_program(char program[]);

int main()
{
    char welcome[] = {"\n\nYou welcome in Daily Planning Program ( Version 14 ) ..\n\n"};
    welcome_massage(welcome);
    char *wel[] = {welcome};
    /* printf(*wel); */
    printf("%s", *wel);

    char program[] = {"My daily program is : \n"};
    daily_program(program);
    char *pro[] = {program};
    /* printf(*pro); */
    printf("%s", *pro);

    char university[] = {"1 - University study from 5 am to 7 am.\n"};
    daily_program(university);
    char *uni[] = {university};
    /* printf(*uni); */
    printf("%s", *uni);

    char english[] = {"2 - English study from 7 am to 9 am.\n"};
    daily_program(english);
    char *eng[] = {english};
    /* printf(*eng); */
    printf("%s", *eng);

    char programming[] = {"3 - study and work in program from 9 am to 5 pm.\n"};
    daily_program(programming);
    char *gra[] = {programming};
    /* printf(*gra); */
    printf("%s", *gra);

    char gym[] = {"4 - go to the gym from 5 pm to 7 pm.\n"};
    daily_program(gym);
    char *g[] = {gym};
    /* printf(*g); */
    printf("%s", *g);

    char private[] = {"5 - this is my private time from 7 pm to 10 pm.\n"};
    daily_program(private);
    char *pri[] = {private};
    /* printf(*pri); */
    printf("%s", *pri);

    char sleeping[] = {"6 - this is sleeping time 10 pm.\n"};
    daily_program(sleeping);
    char *sle[] = {sleeping};
    /* printf(*sle); */
    printf("%s", *sle);

    char dreams[] = {"and happy dreams\n\n\n"};
    daily_program(dreams);
    char *dre[] = {dreams};
    /* printf(*dre); */
    printf("%s", *dre);

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
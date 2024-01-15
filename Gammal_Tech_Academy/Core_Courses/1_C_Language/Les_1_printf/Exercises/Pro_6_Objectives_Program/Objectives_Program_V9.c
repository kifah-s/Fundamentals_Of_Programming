

/* >>> Objectives Program ( Version 9 ) <<< */

/* >>> Objectives Program : Every person has some goals that he dreams of achieving in his life and you always have to make your goals ahead of you to remember them constantly..
Required : write a program that prints out the goals you dream of achieving. <<< */

#include <stdio.h>

char *welcome_massage_fun();
char *objectives_fun();
char *engineer_fun();
char *car_fun();
char *traveling_fun();
char *fitness_fun();

int main()
{
    printf(welcome_massage_fun());
    printf(objectives_fun());
    printf(engineer_fun());
    printf(car_fun());
    printf(traveling_fun());
    printf(fitness_fun());

    return 0;
}

// Function ..
// Welcome massage function;
char *welcome_massage_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in Objectives Program ( Version 9 ) ..\n\n"};
    return *wel_mas;
}

// Objectives function;
char *objectives_fun()
{
    char *objectives[] = {"My Objectives is : \n"};
    return *objectives;
}

// Engineer function;
char *engineer_fun()
{
    char *engineer[] = {"- Professional software engineer\n"};
    return *engineer;
}

// Car function;
char *car_fun()
{
    char *car[] = {"- Buying a car\n"};
    return *car;
}

// Traveling function;
char *traveling_fun()
{
    char *traveling[] = {"- Traveling\n"};
    return *traveling;
    printf("- Fitness body\n\n\n");
}

// Fitness function;
char *fitness_fun()
{
    char *fitness[] = {"- Fitness body\n\n\n"};
    return *fitness;
}
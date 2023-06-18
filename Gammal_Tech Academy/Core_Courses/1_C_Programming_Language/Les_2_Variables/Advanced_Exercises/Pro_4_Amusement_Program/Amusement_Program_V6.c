

/* >>> Amusement Program ( Version 6 ) <<< */

/* >>> Amusement Program : A new amusement park has been established with a strange system.. Each person pays for the entrance ticket according to his age.. If the person is 10 years old, he pays 10 pounds, and so on.. Ahmed, Sherif and Dina went to the amusement park and wanted to know the total amount they would pay.
Required : Write a program that records the age of 3 people in variables and prints the amount they will pay in amusement parks on the screen. <<< */

#include <stdio.h>

void wel_mas_fun();
int amu_ahmad_fun();
int amu_sharef_fun();
int amu_diana_fun();
void amu_total_fun(int ahmad, int sharef, int diana);

int main()
{
    wel_mas_fun();

    amu_total_fun(amu_diana_fun(), amu_sharef_fun(), amu_ahmad_fun());

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Amusement Program ( Version 6 ) ..\n\n");
}

// Amusement ahmad function;
int amu_ahmad_fun()
{
    int ahmad = 10;

    printf("Ahmad = %d\n", ahmad);

    return ahmad;
}

// Amusement sharef function;
int amu_sharef_fun()
{
    int sharef = 15;

    printf("Sharef = %d\n", sharef);

    return sharef;
}

// Amusement ahmad function;
int amu_diana_fun()
{
    int diana = 20;

    printf("Diana = %d\n\n", diana);

    return diana;
}

// Amusement total function;
void amu_total_fun(int ahmad, int sharef, int diana)
{
    int total;

    total = ahmad + sharef + diana;

    printf("Total = %d\n\n\n", total);
}
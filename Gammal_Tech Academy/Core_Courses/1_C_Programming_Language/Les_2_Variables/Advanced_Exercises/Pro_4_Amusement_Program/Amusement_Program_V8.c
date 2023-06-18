

/* >>> Amusement Program ( Version 8 ) <<< */

/* >>> Amusement Program : A new amusement park has been established with a strange system.. Each person pays for the entrance ticket according to his age.. If the person is 10 years old, he pays 10 pounds, and so on.. Ahmed, Sherif and Dina went to the amusement park and wanted to know the total amount they would pay.
Required : Write a program that records the age of 3 people in variables and prints the amount they will pay in amusement parks on the screen. <<< */

#include <stdio.h>

void wel_mas_fun();
int amu_ahmad_fun(int ahmad);
int amu_sharef_fun(int sharef);
int amu_diana_fun(int diana);
void amu_total_fun(int ahmad, int sharef, int diana);

int main()
{
    wel_mas_fun();

    int ahmad = amu_ahmad_fun(20);
    int sharef = amu_sharef_fun(15);
    int diana = amu_diana_fun(10);

    amu_total_fun(ahmad, sharef, diana);

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Amusement Program ( Version 8 ) ..\n\n");
}

// Amusement ahmad function;
int amu_ahmad_fun(int ahmad)
{

    printf("Ahmad = %d\n", ahmad);

    return ahmad;
}

// Amusement sharef function;
int amu_sharef_fun(int sharef)
{

    printf("Sharef = %d\n", sharef);

    return sharef;
}

// Amusement ahmad function;
int amu_diana_fun(int diana)
{

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
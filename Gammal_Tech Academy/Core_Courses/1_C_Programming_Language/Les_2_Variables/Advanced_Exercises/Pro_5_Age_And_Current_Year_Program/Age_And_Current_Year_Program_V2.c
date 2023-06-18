

/* >>> Age And Current Year Program ( Version 2 ) <<< */

/* >>> Write a program that assigns a person’s age in a variable (Example: 23) and assigns the year in another variable (Example: 2022), then the program subtracts them and prints the result on the screen (Example: 299). <<< */

#include <stdio.h>

void wel_mas_fun();
void bir_fun(int age, int year);

int main()
{
    wel_mas_fun();

    int age = 27,
        year = 2023;
    bir_fun(age, year);

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Age And Current Year Program ( Version 2 ) ..\n\n");
}

// Year of Birth function;
void bir_fun(int age, int year)
{
    int result = year - age;

    printf("Result is : %d\n\n\n", result);
}
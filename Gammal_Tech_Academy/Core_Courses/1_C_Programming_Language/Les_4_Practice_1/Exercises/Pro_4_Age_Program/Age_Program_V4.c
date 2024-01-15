

/* >>> Age Program ( Version 4 ) <<< */

/* >>> A program that asks a person about his age and prints for him the year of his birth. <<< */

#include <stdio.h>

void welMasFun();
int ageFun();
int currentYearFun();
int yearOfBirthFun();

int main()
{
    welMasFun();
    yearOfBirthFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Age Program ( Version 4 ) ..\n\n");
}

// Age function;
int ageFun()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    return age;
}

// Current year function;
int currentYearFun()
{
    int currentYear;
    printf("Enter the current year : ");
    scanf("%d", &currentYear);
    return currentYear;
}

// Year of Birth function;
int yearOfBirthFun()
{
    int age = ageFun();
    int currentYear = currentYearFun();

    int yearOfBirth;
    yearOfBirth = currentYear - age;
    printf("\nYear Of Birth : %d\n\n\n", yearOfBirth);
}

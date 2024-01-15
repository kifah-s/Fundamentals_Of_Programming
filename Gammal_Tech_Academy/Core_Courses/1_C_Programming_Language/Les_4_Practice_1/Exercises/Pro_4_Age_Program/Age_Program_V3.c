

/* >>> Age Program ( Version 3 ) <<< */

/* >>> A program that asks a person about his age and prints for him the year of his birth. <<< */

#include <stdio.h>

void welMasFun();
int ageFun();
int currentYearFun();
int yearOfBirthFun(int currentYear, int age);

int main()
{
    welMasFun();

    int age = ageFun();
    int currentYear = currentYearFun();
    
    yearOfBirthFun(currentYear, age);

    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Age Program ( Version 3 ) ..\n\n");
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
int yearOfBirthFun(int currentYear, int age)
{
    int yearOfBirth;
    yearOfBirth = currentYear - age;
    printf("\nYear Of Birth : %d\n\n\n", yearOfBirth);
}

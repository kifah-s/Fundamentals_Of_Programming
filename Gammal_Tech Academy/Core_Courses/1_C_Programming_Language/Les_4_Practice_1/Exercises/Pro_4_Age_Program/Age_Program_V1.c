

/* >>> Age Program ( Version 1 ) <<< */

/* >>> A program that asks a person about his age and prints for him the year of his birth. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Age Program ( Version 1 ) ..\n\n");

    int age,
        current_year,
        year_of_Birth;

    printf("Enter the age : ");
    scanf("%d", &age);

    printf("Enter the current year : ");
    scanf("%d", &current_year);

    year_of_Birth = current_year - age;
    printf("\nYear Of Birth : %d\n\n\n", year_of_Birth);

    return 0;
}
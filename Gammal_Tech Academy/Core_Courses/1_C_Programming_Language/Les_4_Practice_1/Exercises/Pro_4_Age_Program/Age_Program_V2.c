

/* >>> Age Program ( Version 2 ) <<< */

/* >>> A program that asks a person about his age and prints for him the year of his birth. <<< */

#include <stdio.h>

void welcomeMassageFun();
int ageFun();

int main()
{
    welcomeMassageFun();
    ageFun();
    
    return 0;
}

// Function;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Age Program ( Version 2 ) ..\n\n");
}

// Age function;
int ageFun()
{
    int age,
        current_year,
        year_of_Birth;

    printf("Enter the age : ");
    scanf("%d", &age);

    printf("Enter the current year : ");
    scanf("%d", &current_year);

    year_of_Birth = current_year - age;
    printf("\nYear Of Birth : %d\n\n\n", year_of_Birth);
}
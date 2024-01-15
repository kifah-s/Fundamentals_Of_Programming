

/* >>> Age Teen Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter number if more than 10 and less than 20 prints the word "Teen". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Age Teen Program ( Version 1 ) .. \n\n");

    int age;

    printf("Please enter a number : ");
    scanf("%d", &age);

    if (age >= 10 && age <= 20)
    {
        printf("\nThis is age teen\n\n\n");
    }

    return 0;
}
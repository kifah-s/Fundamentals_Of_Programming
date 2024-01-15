

/* >>> Age Teen Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter number if more than 10 and less than 20 prints the word "Teen". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Age Teen Program ( Version 2 ) .. \n\n");

    int age;

    printf("Please enter your age : ");
    scanf("%d", &age);

    if (age >= 1 && age <= 10)
    {
        printf("\nThis is age childhood\n\n\n");
    }
    else if (age >= 11 && age <= 20)
    {
        printf("\nThis is age teen\n\n\n");
    }
    else
    {
        printf("\nThis is age awareness\n\n\n");
    }

    return 0;
}
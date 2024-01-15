

/* >>> Age Teen Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter number if more than 10 and less than 20 prints the word "Teen". <<< */

#include <stdio.h>

void welcomeMassageFun();
int ageTeenFun();

int main()
{
    welcomeMassageFun();
    ageTeenFun();
    
    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Age Teen Program ( Version 3 ) .. \n\n");
}

// Age Teen function;
int ageTeenFun()
{
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
}
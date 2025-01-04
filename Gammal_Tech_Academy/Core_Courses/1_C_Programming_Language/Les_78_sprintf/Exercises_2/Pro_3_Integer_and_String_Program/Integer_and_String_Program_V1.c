

//* Integer and String Program (Version 1).

/*
* Write a program that takes an integer and a string as input from the user,
* and uses sprintf to concatenate them.

! Input:
! Please enter your name: ahmed
! Please enter your age: 25

! Output:
! Name: ahmed, Age: 25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char name[], int age, char myStr[]);

int main()
{
    // Declare Variables.
    int age = 0;
    char name[50];
    char myString[100];

    // Call Functions.
    resultFun(name, age, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Integer and String Program (Version 1) ..\n\n");
}

// Get Name - Function.
void getNameFun(char name[])
{
    printf("Please enter your name: ");
    scanf("%s", name);
}

// Get Age - Function.
int getAgeFun(int age)
{
    printf("Please enter your age: ");
    scanf("%d", &age);

    return age;
}

// Concatenate Name and Age - Function.
void concatenateNameAndAgeFun(int age, char name[], char myStr[])
{
    sprintf(myStr, "Name: %s, Age: %d", name, age);
}

// Result - Function.
void resultFun(char name[], int age, char myStr[])
{
    printWelcomeMessageFun();
    getNameFun(name);
    age = getAgeFun(age);
    concatenateNameAndAgeFun(age, name, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..

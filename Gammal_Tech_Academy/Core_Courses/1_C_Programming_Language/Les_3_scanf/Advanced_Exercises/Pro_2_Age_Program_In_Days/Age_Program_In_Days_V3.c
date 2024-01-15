

/* >>> Age Program In Days ( Version 3 ) <<< */

/* >>> A program that asks a person about his age in years and then prints his age in days without leap years. <<< */

#include <stdio.h>

void welMasFun();
int ageFun();
int ageCalFun(int age);

int main()
{
    welMasFun();
    ageCalFun(ageFun());

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Age Program In Days ( Version 3 ) ..\n\n");
}

// Age function;
int ageFun()
{
    int num1;
    printf("Enter your age in years : ");
    scanf("%d", &num1);
    return num1;
}

// Age calculation function;
int ageCalFun(int age)
{
    age = age * 365;
    printf("\nYour age in days : %d\n\n\n", age);
}


/* >>> Age Program In Days ( Version 2 ) <<< */

/* >>> A program that asks a person about his age in years and then prints his age in days without leap years. <<< */

#include <stdio.h>

void welMasFun();
int ageCalFun();

int main()
{
    welMasFun();
    ageCalFun();
    
    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Age Program In Days ( Version 2 ) ..\n\n");
}

// Age calculation function;
int ageCalFun()
{
    int num_1;

    printf("Enter your age in years : ");
    scanf("%d", &num_1);
    num_1 = num_1 * 365;

    printf("\nYour age in days : %d\n\n\n", num_1);
}
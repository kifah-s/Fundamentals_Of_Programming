

/* >>> Enter Number Program ( Version 2 ) <<< */

/* >>> A program requesting a person to enter a number and print the output between the two text marks ". <<< */

#include <stdio.h>

void welMasFun();
int numberFun();

int main()
{
    welMasFun();
    numberFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Enter Number Program ( Version 2 ) ..\n\n");
}

// Number function;
int numberFun()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\nThe number is : \" %d \" \n\n\n", num);
}
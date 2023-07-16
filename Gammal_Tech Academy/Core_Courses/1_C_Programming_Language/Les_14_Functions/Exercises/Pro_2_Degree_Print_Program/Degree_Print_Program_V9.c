

/* >>> Degree Print Program ( Version 9 ) <<< */

/* >>> A program in which function her job is to print the word "degree = 98%". <<< */

#include <stdio.h>

void welcomeMassageFun();
int getDegreeFun();
int degreePrintFun();

int main()
{
    degreePrintFun();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Degree Print Program ( Version 9 ) .. \n\n");
}

// Get Degree Function;
int getDegreeFun()
{
    int deg;
    printf("What is your degree ? ");
    scanf("%d", &deg);

    return deg;
}

// Degree Print Function;
int degreePrintFun()
{
    welcomeMassageFun();

    int deg = getDegreeFun();

    printf("\nDegree = %d %\n\n\n", deg);
}


/* >>> Degree Print Program ( Version 6 ) <<< */

/* >>> A program in which function her job is to print the word "degree = 98%". <<< */

#include <stdio.h>

void welcomeMassageFun();
int degreePrintFun();

int main()
{
    welcomeMassageFun();
    degreePrintFun();
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Degree Print Program ( Version 6 ) .. \n\n");
}

// Degree Print Function;
int degreePrintFun()
{
    int deg;

    printf("What is your degree ? ");
    scanf("%d", &deg);

    printf("\nDegree = %d %\n\n\n", deg);
}
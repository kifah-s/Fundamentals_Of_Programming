

/* >>> Degree Print Program - ( Version - 2 ) <<< */

/* >>> A program in which function her job is to print the word "degree = 98%". <<< */

#include <stdio.h>

void degree();

int main()
{
    printf("\n\nYou welcome in Degree Print Program - ( Version - 2 ) .. \n\n");

    int x;

    printf("What is your degree ? ");
    scanf("%d", &x);

    degree(x);

    return 0;
}

// Function ..
void degree(int deg)
{
    printf("\nDegree = %d %\n\n\n", deg);
}



/* >>> Gammal Tech Degree Program ( Version 2 ) <<< */

/* >>> Gammal Tech Degree Program : After the end of each course, the participant on the gammal tech website must pass an exam on the course in order to know if they fully understood the course or if they need to review some topics.
Required : Write a program if the student gets a score of 100%, printing “congratulations”, otherwise  it prints "good luck next time". <<< */

#include <stdio.h>

void welcomeMassageFun();
int degreeFun();

int main()
{
    welcomeMassageFun();
    degreeFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Gammal Tech Degree Program ( Version 2 ) ..\n\n");
}

// Degree function;
int degreeFun()
{
    int degree;
    printf("Please enter degree : ");
    scanf("%d", &degree);

    if (degree == 100)
    {
        printf("\nCongratulations\n\n\n");
    }
    else if (degree < 100)
    {
        printf("\nGood luck next time\n\n\n");
    }
    else
    {
        printf("\nExcuse me, the highest degree is 100\n\n\n");
    }
}
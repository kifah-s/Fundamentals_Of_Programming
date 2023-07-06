

/* >>> Gammal Tech Degree Program ( Version 1 ) <<< */

/* >>> Gammal Tech Degree Program : After the end of each course, the participant on the gammal tech website must pass an exam on the course in order to know if they fully understood the course or if they need to review some topics.
Required : Write a program if the student gets a score of 100%, printing “congratulations”, otherwise  it prints "good luck next time". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Gammal Tech Degree Program ( Version 1 ) ..\n\n");

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

    return 0;
}
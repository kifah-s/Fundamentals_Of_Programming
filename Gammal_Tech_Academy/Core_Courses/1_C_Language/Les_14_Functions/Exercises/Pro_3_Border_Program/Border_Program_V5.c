

/* >>> Border Program ( Version 5 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Border Program ( Version 5 ) .. \n\n");

    char answer;

    printf("Do you want to create border ? ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("\n= = = = = = = = = = = = = = = = = = \n\n\n");
    }

    return 0;
}
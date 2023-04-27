

/* >>> Border Program - ( Version - 2 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

void border();

int main()
{
    printf("\n\nYou welcome in Border Program - ( Version - 2 ) .. \n\n");

    char answer;

    printf("Do you want to create border ? ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        border();
    }

    return 0;
}

// Function ..
void border()
{
    printf("\n= = = = = = = = = = = = = = = = = = \n\n\n");
}



/* >>> Border Program ( Version 9 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

void welcomeMassageFun();
char getAnswerFun();
int borderFun();

int main()
{
    borderFun();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Border Program ( Version 9 ) .. \n\n");
}

// Get Answer Function;
char getAnswerFun()
{
    char answer;
    printf("Do you want to create border ? ");
    scanf("%c", &answer);

    return answer;
}

// Border Function;
int borderFun()
{
    welcomeMassageFun();

    char answer = getAnswerFun();

    if (answer == 'y' || answer == 'Y')
    {
        printf("\n= = = = = = = = = = = = = = = = = = \n\n\n");
    }
}
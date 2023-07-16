

/* >>> Border Program ( Version 7 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

void welcomeMassageFun();
char getAnswerFun();
int borderFun(char answer);

int main()
{
    welcomeMassageFun();

    char answer = getAnswerFun();
    borderFun(answer);
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Border Program ( Version 7 ) .. \n\n");
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
int borderFun(char answer)
{

    if (answer == 'y' || answer == 'Y')
    {
        printf("\n= = = = = = = = = = = = = = = = = = \n\n\n");
    }
}
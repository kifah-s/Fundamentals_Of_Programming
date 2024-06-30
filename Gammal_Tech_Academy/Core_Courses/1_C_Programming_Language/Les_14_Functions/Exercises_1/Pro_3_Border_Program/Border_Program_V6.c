

/* >>> Border Program ( Version 6 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

void welcomeMassageFun();
int borderFun();

int main()
{
    welcomeMassageFun();
    borderFun();
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Border Program ( Version 6 ) .. \n\n");
}

// Border Function;
int borderFun()
{
    char answer;
    printf("Do you want to create border ? ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("\n= = = = = = = = = = = = = = = = = = \n\n\n");
    }
}
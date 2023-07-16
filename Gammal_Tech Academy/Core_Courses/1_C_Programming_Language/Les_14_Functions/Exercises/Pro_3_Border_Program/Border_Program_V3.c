

/* >>> Border Program ( Version 3 ) <<< */

/* >>> A program in which function her job is to draw a line like "= = = = = = = =". <<< */

#include <stdio.h>

void welcomeMassageFun();
void borderFun();

int main()
{
    welcomeMassageFun();

    borderFun();
    borderFun();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Border Program ( Version 3 ) .. \n\n");
}

// Border Function;
void borderFun()
{
    printf("= = = = = = = = = = = = = = = = = = \n\n");
}

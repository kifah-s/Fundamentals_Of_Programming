

/* >>> Letter " h " Drawing Program ( Version 3 ) <<< */

/* >>> A program that drawing letter " h " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let_1[], char let_2[], char let_3[], char let_4[], char let_5[], char let_6[], char let_7[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Letter \" h \" Drawing Program ( Version 3 ) ..\n\n");
    
    let_fun("\n*\n*\n*\n*\n*\n*\n*", "***********\n", "*          *\n", "*          *\n", "*          *\n", "*          *\n", "*          *\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter h function;
void let_fun(char let_1[], char let_2[], char let_3[], char let_4[], char let_5[], char let_6[], char let_7[])
{
    printf("%s", let_1);
    printf("%s", let_2);
    printf("%s", let_3);
    printf("%s", let_4);
    printf("%s", let_5);
    printf("%s", let_6);
    printf("%s", let_7);
}
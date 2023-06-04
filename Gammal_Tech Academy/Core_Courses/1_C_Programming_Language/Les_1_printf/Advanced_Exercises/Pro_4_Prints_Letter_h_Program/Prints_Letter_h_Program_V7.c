

/* >>> Letter " h " Drawing Program ( Version 7 ) <<< */

/* >>> A program that drawing letter " h " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let_1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" h \" Drawing Program ( Version 7 ) ..\n\n"};
    wel_mas_fun(mas);

    
    let_fun("h");
    

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter h function;
void let_fun(char let_1[])
{
    printf("\n%s\n%s\n%s\n%s\n%s\n%s\n%s", let_1,let_1,let_1,let_1,let_1,let_1,let_1);
    printf("%s%s%s%s%s%s%s%s%s%s%s\n", let_1,let_1,let_1,let_1,let_1,let_1,let_1,let_1,let_1,let_1,let_1,let_1);
    printf("%s          %s\n", let_1,let_1);
    printf("%s          %s\n", let_1,let_1);
    printf("%s          %s\n", let_1,let_1);
    printf("%s          %s\n", let_1,let_1);
    printf("%s          %s\n\n\n", let_1,let_1);
}
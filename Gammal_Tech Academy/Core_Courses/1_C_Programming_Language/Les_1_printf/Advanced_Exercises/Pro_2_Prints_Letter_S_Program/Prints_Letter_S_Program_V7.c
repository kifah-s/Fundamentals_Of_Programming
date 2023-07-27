

/* >>> Letter " S " Drawing Program ( Version 7 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

void wel_mas_fun(char wel[]);
void let_fun(char let_1[]);

int main()
{
    char wel[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 7 )\n\n\n"};
    wel_mas_fun(wel);

    char let_1[] = {"5"};
    let_fun(let_1);
    

    return 0;
}

// Function..
// Welcome massage function:
void wel_mas_fun(char wel[])
{
    printf("%s", wel);
}

// Letter function;
void let_fun(char let_1[])
{
    printf("%s%s%s%s%s%s%s%s%s%s\n", let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1);
    printf("%s\n%s\n%s\n%s\n", let_1, let_1, let_1, let_1);
    printf("%s%s%s%s%s%s%s%s%s\n", let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1);
    printf("         %s\n", let_1);
    printf("         %s\n", let_1);
    printf("         %s\n", let_1);
    printf("         %s\n", let_1);
    printf("%s%s%s%s%s%s%s%s%s%s\n\n\n", let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1, let_1);
}
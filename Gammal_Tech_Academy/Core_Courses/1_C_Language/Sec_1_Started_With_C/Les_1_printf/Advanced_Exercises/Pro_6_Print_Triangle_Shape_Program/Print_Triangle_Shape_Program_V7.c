

/* >>> Triangle Shape Drawing Program ( Version 7 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tri_fun(char tri1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 7 ) ..\n\n"};
    wel_mas_fun(mas);

    char tri1[] = {"#"};
    tri_fun(tri1);
    
    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void tri_fun(char tri1[])
{
    printf("\n               %s\n", tri1);
    printf("             %s   %s\n", tri1, tri1);
    printf("            %s     %s\n", tri1, tri1);
    printf("           %s       %s\n", tri1, tri1);
    printf("          %s         %s\n", tri1, tri1);
    printf("         %s           %s\n", tri1, tri1);
    printf("        %s             %s\n", tri1, tri1);
    printf("       %s               %s\n", tri1, tri1);
    printf("      %s                 %s\n", tri1, tri1);
    printf("     %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n\n", tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1, tri1);
}
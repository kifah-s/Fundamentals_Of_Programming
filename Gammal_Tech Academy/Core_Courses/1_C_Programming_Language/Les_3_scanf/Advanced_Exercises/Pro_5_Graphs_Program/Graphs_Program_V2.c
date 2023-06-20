

/* >>> Graphs Program ( Version 2 ) <<< */

/* >>> There are a lot of students studying graphs in school and we would like to help them.
Required : Write a program that takes the values of 3 variables x, y and z and then prints the x + z and the y + z in parentheses eg 5 7 8 (25, 13). <<< */

#include <stdio.h>

void welMasFun();
int graphsFun();

int main()
{
    welMasFun();
    graphsFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Graphs Program ( Version 2 ) ..\n\n");
}

// Graphs function;
int graphsFun()
{
    int x,
        y,
        z,
        res_1,
        res_2;

    printf(" Enter X : ");
    scanf("%d", &x);

    printf(" Enter Y : ");
    scanf("%d", &y);

    printf(" Enter Z : ");
    scanf("%d", &z);

    res_1 = x + z;
    res_2 = y + z;

    printf("\nGraphs : %d %d %d ( %d , %d )\n\n\n", x, y, z, res_1, res_2);
}
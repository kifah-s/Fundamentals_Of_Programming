

/* >>> Graphs Program ( Version 5 ) <<< */

/* >>> There are a lot of students studying graphs in school and we would like to help them.
Required : Write a program that takes the values of 3 variables x, y and z and then prints the x + z and the y + z in parentheses eg 5 7 8 (25, 13). <<< */

#include <stdio.h>

void welMasFun();

int graXFun();
int graYFun();
int graZFun();

int resultGraphsFun();

int main()
{
    welMasFun();

    resultGraphsFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Graphs Program ( Version 5 ) ..\n\n");
}

// Graph X function;
int graXFun()
{
    int x;
    printf(" Enter X : ");
    scanf("%d", &x);
    return x;
}

// Graph Y function;
int graYFun()
{
    int y;
    printf(" Enter y : ");
    scanf("%d", &y);
    return y;
}

// Graph Z function;
int graZFun()
{
    int z;
    printf(" Enter z : ");
    scanf("%d", &z);
    return z;
}

// Result Graphs function;;
int resultGraphsFun()
{
    int x = graXFun();
    int y = graYFun();
    int z = graZFun();

    int result1;
    int result2;

    result1 = x + z;
    result2 = y + z;
    printf("\nGraphs : %d %d %d ( %d , %d )\n\n\n", x, y, z, result1, result2);
}
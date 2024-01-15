

/* >>> First Letter Capital Program ( Version 1 ) <<< */

/* >>> The program that has an array is named names that has 3 names separated with (,) the program should print the names; first letter is capital and before each name is written .Mr such as Mr.Ahmed without any change in the original array. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
char firstLetterCapitalFun(char arr[]);

int main()
{
    welcomeMassageFun();

    char arr[] = {"kifah, madaal, saloum."};

    firstLetterCapitalFun(arr);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter Capital Program ( Version 1 ) ..\n\n");
}

// First Letter Capital / Function.
char firstLetterCapitalFun(char arr[])
{
    char x1[20], x2[20], x3[20];

    sscanf(arr, "%s %s %s", x1, x2, x3);

    x1[0] -= 32, x2[0] -= 32, x3[0] -= 32;

    printf("Mr. %s", x1);
    printf(" Mr. %s", x2);
    printf(" Mr. %s\n\n", x3);
}
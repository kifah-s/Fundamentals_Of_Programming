

/* >>> Triangle Print Program ( Version 6 ) <<< */

/* >>> A program that prints a triangle in the form of :

        1

        22

        333

        4444

        55555 <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int trianglePrintFun(int rows);

int main()
{
    welcomeMassageFun();
    
    int rows = getNumberFun();
    trianglePrintFun(rows);
    
    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Triangle Print Program ( Version 6 ) .. \n\n");
}

// Get number function;
int getNumberFun()
{
    int rows;
    printf("Please enter number of rows : ");
    scanf("%d", &rows);
    return rows;
}

// Triangle Print function;
int trianglePrintFun(int rows)
{
    int i, j;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n\n");
}
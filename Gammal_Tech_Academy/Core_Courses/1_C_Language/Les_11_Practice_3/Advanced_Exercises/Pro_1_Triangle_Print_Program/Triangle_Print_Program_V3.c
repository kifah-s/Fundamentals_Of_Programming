

/* >>> Triangle Print Program ( Version 3 ) <<< */

/* >>> A program that prints a triangle in the form of :

        1

        22

        333

        4444

        55555 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Triangle Print Program ( Version 3 ) .. \n\n");

    int i, j, rows;

    printf("Please enter number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
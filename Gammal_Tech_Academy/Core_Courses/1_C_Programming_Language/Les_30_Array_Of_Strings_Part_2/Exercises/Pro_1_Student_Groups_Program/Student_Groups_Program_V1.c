

/* >>> Student Groups Program ( Version 1 ) <<< */

/* >>> A program in which array of char 3D has 3 groups each group 3 students and each student's name does not have more than 20 characters.. Students' names are required to be entered and each group printed in a line. <<< */

#include <stdio.h>
#include <string.h>

int Student_Groups();

int main()
{
    printf("\n\nYou welcome in Student Groups Program ( Version 1 ) ..\n\n");

    Student_Groups();

    return 0;
}

// Functions ..
// Student Groups function;
int Student_Groups()
{
    // Declaration variable, array of characters and counters;
    int groups = 3, student = 3;
    char name[groups][student][20];
    int i, j;

    // Receive values from the user;
    printf("Please enter ' %d ' names : \n", groups * student);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%s", name[i][j]);
        }
    }

    // Printing names;
    printf("\nnames is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%s  ", name[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}
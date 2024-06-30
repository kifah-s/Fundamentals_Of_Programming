

/* >>> Student Groups Program ( Version 3 ) <<< */

/* >>> A program in which array of char 3D has 3 groups each group 3 students and each student's name does not have more than 20 characters.. Students' names are required to be entered and each group printed in a line. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int Student_Groups();

int main()
{
    welcomeMassageFun();
    Student_Groups();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Student Groups Program ( Version 3 ) ..\n\n");
}

// Student Groups function;
int Student_Groups()
{
    // Declaration variable and counters;
    int groups, student;
    int i, j;

    // Receive values from the user;
    printf("Please enter the number of groups : ");
    scanf("%d", &groups);

    printf("Please enter the number of students in each group : ");
    scanf("%d", &student);

    // Declaration array of characters;
    char name[groups][student][20];

    // Receive values from the user;
    printf("Please enter ' %d ' names : \n", groups * student);
    for (i = 0; i < groups; i++)
    {
        for (j = 0; j < student; j++)
        {
            scanf("%s", name[i][j]);
        }
    }

    // Printing names;
    printf("\nnames is : \n");
    for (i = 0; i < groups; i++)
    {
        for (j = 0; j < student; j++)
        {
            printf("%s  ", name[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}


/* >>> Student Groups Program ( Version 2 ) <<< */

/* >>> A program in which array 3D has 3 groups, each group has 3 students. Each student has a name of no more than 10 letters... He asks for the names of the students and prints each group on a line. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int student_groups();

int main()
{
    welcomeMassageFun();
    student_groups();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Student Groups Program ( Version 2 ) ..\n\n");
}

// student groups function;
int student_groups()
{
    // Declaration array, counters and variable;
    char student[3][3][10];
    int i, j;

    // Receive values from the user;
    printf("Please enter student names : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%s", student[i][j]);
        }
    }
    printf("\n----------------------\n\n");

    // Printing names;
    for (i = 0; i < 3; i++)
    {
        printf("Group %d : ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%s, ", student[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}
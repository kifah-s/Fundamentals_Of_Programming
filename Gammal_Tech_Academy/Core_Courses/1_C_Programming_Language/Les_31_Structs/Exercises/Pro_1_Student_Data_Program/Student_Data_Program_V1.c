

/* >>> Student Data Program ( Version 1 ) <<< */

/* >>> A program that stores student data in struct (name, age, total grades) and prints it. <<< */

#include <stdio.h>
#include <string.h>

struct student
{
    char name[25];
    int age, total_grades;
};

int main()
{
    printf("\n\nYou welcome in Student Data Program ( Version 1 ) ..\n\n");

    struct student s_1;

    strcpy(s_1.name, "kifah");
    s_1.age = 27;
    s_1.total_grades = 98;

    printf("Name : %s,  Age : %d,   Total grades = %d\n\n", s_1.name, s_1.age, s_1.total_grades);

    return 0;
}



/* >>> Students And Grades Program ( Version 5 ) <<< */

/* >>> A program that stores a group of students and their grades in a group of materials (math, science, English). <<< */

#include <stdio.h>
#include <string.h>

// Structs;
// Declaration struct;
struct students
{
    char name[20];
    int math;
    int science;
    int english;
};

void welcomeMassageFun();
void printingStudentFun();

int main()
{
    welcomeMassageFun();

    printingStudentFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Students And Grades Program ( Version 5 ) ..\n\n");
}

// Printing Student function;
void printingStudentFun()
{
    struct students student[5] = {
        {"kifah", 100, 100, 100},
        {"a", 90, 90, 90},
        {"b", 80, 80, 80},
        {"c", 70, 70, 70},
        {"d", 60, 60, 60},
    };

    for (size_t i = 0; i < 5; i++)
    {
        printf("Student Name : %s - math grade : %d - science grade : %d - english grade : %d \n", student[i].name, student[i].math, student[i].science, student[i].english);
    }
    printf("\n\n");
}
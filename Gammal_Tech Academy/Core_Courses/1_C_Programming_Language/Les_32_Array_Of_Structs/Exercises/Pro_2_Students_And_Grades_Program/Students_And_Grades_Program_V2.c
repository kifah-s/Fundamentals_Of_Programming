

/* >>> Students And Grades Program ( Version 2 ) <<< */

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

int main()
{
    printf("\n\nYou welcome in Students And Grades Program ( Version 2 ) ..\n\n");

    struct students student[5];

    strcpy(student[0].name, "kifah");
    student[0].math = 100;
    student[0].science = 100;
    student[0].english = 100;

    strcpy(student[1].name, "a");
    student[1].math = 90;
    student[1].science = 90;
    student[1].english = 90;

    strcpy(student[2].name, "b");
    student[2].math = 80;
    student[2].science = 80;
    student[2].english = 80;

    strcpy(student[3].name, "c");
    student[3].math = 70;
    student[3].science = 70;
    student[3].english = 70;

    strcpy(student[4].name, "d");
    student[4].math = 60;
    student[4].science = 60;
    student[4].english = 60;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Student Name : %s - math grade : %d - science grade : %d - english grade : %d \n", student[i].name, student[i].math, student[i].science, student[i].english);
    }
    printf("\n\n");

    return 0;
}

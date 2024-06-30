

/* >>> Students And Grades Program ( Version 7 ) <<< */

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
} student[5];

void welcomeMassageFun();
void getInformationStudentFun(struct students student[5]);
void printingStudentFun(struct students student[5]);

int main()
{
    welcomeMassageFun();
    getInformationStudentFun(student);
    printingStudentFun(student);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Students And Grades Program ( Version 7 ) ..\n\n");
}

// Get information student function;
void getInformationStudentFun(struct students student[5])
{
    for (size_t i = 0; i < 5; i++)
    {
        printf("Please enter student %d name : ", i + 1);
        scanf("%s", student[i].name);

        printf("Math grade : ");
        scanf("%d", &student[i].math);

        printf("Science grade : ");
        scanf("%d", &student[i].science);

        printf("English grade : ");
        scanf("%d", &student[i].english);

        printf("\n");
    }
}

// Printing Student function;
void printingStudentFun(struct students student[5])
{
    for (size_t i = 0; i < 5; i++)
    {
        printf("Student Name : %s - math grade : %d - science grade : %d - english grade : %d \n", student[i].name, student[i].math, student[i].science, student[i].english);
    }
    printf("\n\n");
}
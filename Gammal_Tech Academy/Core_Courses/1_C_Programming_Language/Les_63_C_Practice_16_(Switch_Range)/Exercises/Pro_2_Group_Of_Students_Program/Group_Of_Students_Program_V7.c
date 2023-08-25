

/* >>> Group Of Students Program ( Version 7 ) <<< */

/* >>> A program that stores a group of students and their grades in a group of materials(math, science, English) And assuming that each subject has a score of 100, the percentage of each subject is calculated and the total is complete, and if any degree less than 50% is written by (F), and if it is between 50 and 60, it is written by (D) and if between The 60th and the 70th write it (C), and if between the 70th and the 75th it is written by (85), and if between the 85th and the 100th it is written (A). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Structs ..
struct groupOfStudents
{
    char name[25];
    float math;
    float science;
    float english;
};

// Functions ..
void welcomeMassageFun();
int numberOfStudentFun(int number);
struct groupOfStudents getInformationsStudentsFun(int number, struct groupOfStudents student[number]);
struct groupOfStudents percentageFun(int number, struct groupOfStudents student[number]);
void successAndFailureFun(int number);

int main()
{
    welcomeMassageFun();

    int number = numberOfStudentFun(number);

    struct groupOfStudents student[number];
    getInformationsStudentsFun(number, student);
    percentageFun(number, student);

    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Group Of Students Program ( Version 7 ) ..\n\n");
}

// Get number of student / function;
int numberOfStudentFun(int number)
{
    printf("Please enter number of students: ");
    scanf("%d", &number);

    return number;
}

// Get informations students  / function;
struct groupOfStudents getInformationsStudentsFun(int number, struct groupOfStudents student[number])
{
    printf("\nPlease enter informations the students: \n");
    for (int i = 0; i < number; i++)
    {
        printf("\nStudent %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", student[i].name);

        printf("Math grade: ");
        scanf("%f", &student[i].math);

        printf("Science grade: ");
        scanf("%f", &student[i].science);

        printf("English grade: ");
        scanf("%f", &student[i].english);
    }
}

// Percentage / function;
struct groupOfStudents percentageFun(int number, struct groupOfStudents student[number])
{
    float total = 0;
    printf("\nMaterial Percentage: ");
    for (int i = 0; i < number; i++)
    {
        printf("\n\nStudent %d\n", i + 1);
        printf("Name: %s\n", student[i].name);

        student[i].math = (student[i].math / 100) * 100;
        printf("The percentage for math = %.2f %, ", student[i].math);
        successAndFailureFun(student[i].math);

        student[i].science = (student[i].science / 100) * 100;
        printf("The percentage for science = %.2f %, ", student[i].science);
        successAndFailureFun(student[i].science);

        student[i].english = (student[i].english / 100) * 100;
        printf("The percentage for english = %.2f %, ", student[i].english);
        successAndFailureFun(student[i].english);

        total = (student[i].math + student[i].science + student[i].english) / 3;
        total = (total / 100) * 100;
        printf("Percentage Total = %.2f %, ", total);
        successAndFailureFun(total);
    }
    printf("\n\n\n");
}

// success and failure / function;
void successAndFailureFun(int number)
{
    switch (number)
    {
    case 0 ... 49:
        printf("F\n");
        break;

    case 50 ... 59:
        printf("D\n");
        break;

    case 60 ... 69:
        printf("C\n");
        break;

    case 70 ... 79:
        printf("B\n");
        break;

    case 80 ... 100:
        printf("A\n");
        break;

    default:
        printf("\nError Grade\n\n");
        break;
    }
}

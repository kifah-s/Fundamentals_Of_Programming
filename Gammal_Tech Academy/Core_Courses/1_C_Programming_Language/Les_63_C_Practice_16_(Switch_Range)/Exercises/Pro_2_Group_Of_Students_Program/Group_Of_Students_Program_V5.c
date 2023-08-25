

/* >>> Group Of Students Program ( Version 5 ) <<< */

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
struct groupOfStudents percentageFun(struct groupOfStudents student);
void successAndFailureFun(float number);

int main()
{
    welcomeMassageFun();

    printf("\nMaterial Percentage: \n\n");
    printf("Student 1:\n");
    struct groupOfStudents student_1;
    strcpy(student_1.name, "A");
    student_1.math = 95;
    student_1.science = 91;
    student_1.english = 99;
    percentageFun(student_1);

    printf("\n\nStudent 2:\n");
    struct groupOfStudents student_2;
    strcpy(student_2.name, "B");
    student_2.math = 85;
    student_2.science = 81;
    student_2.english = 89;
    percentageFun(student_2);

    printf("\n\nStudent 3:\n");
    struct groupOfStudents student_3;
    strcpy(student_3.name, "C");
    student_3.math = 75;
    student_3.science = 72;
    student_3.english = 70;
    percentageFun(student_3);

    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Group Of Students Program ( Version 5 ) ..\n\n");
}

// Percentage / function;
struct groupOfStudents percentageFun(struct groupOfStudents student)
{
    float total = 0;

    printf("Name: %s\n", student.name);

    student.math = (student.math / 100) * 100;
    printf("The percentage for math = %.2f %, ", student.math);
    successAndFailureFun(student.math);

    student.science = (student.science / 100) * 100;
    printf("The percentage for science = %.2f %, ", student.science);
    successAndFailureFun(student.science);

    student.english = (student.english / 100) * 100;
    printf("The percentage for english = %.2f %, ", student.english);
    successAndFailureFun(student.english);

    total = (student.math + student.science + student.english) / 3;
    total = (total / 100) * 100;
    printf("Percentage Total = %.2f %, ", total);
    successAndFailureFun(total);
    printf("\n\n\n");
}

// success and failure / function;
void successAndFailureFun(float number)
{
    if (number >= 0 && number <= 50)
    {
        printf("F\n");
    }
    else if (number > 50 && number <= 60)
    {
        printf("D\n");
    }
    else if (number > 60 && number <= 70)
    {
        printf("C\n");
    }
    else if (number > 70 && number <= 85)
    {
        printf("B\n");
    }
    else if (number > 85 && number <= 100)
    {
        printf("A\n");
    }
}

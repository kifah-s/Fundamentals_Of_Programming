

/* >>> Group Of Students Program ( Version 1 ) <<< */

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
struct groupOfStudents getInformationsStudentsFun(struct groupOfStudents student[3]);
struct groupOfStudents percentageFun(struct groupOfStudents student[3]);
void successAndFailureFun(float number);

int main()
{
    welcomeMassageFun();

    struct groupOfStudents student[3];
    getInformationsStudentsFun(student);
    /* printf("\ninformations the students: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nstudent name: %s", student[i].name);
        printf("\nMath grade: %d", student[i].math);
        printf("\nScience grade: %d", student[i].science);
        printf("\nEnglish grade: %d\n\n", student[i].english);
    } */

    percentageFun(student);
    
    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Group Of Students Program ( Version 1 ) ..\n\n");
}

// Get informations students  / function;
struct groupOfStudents getInformationsStudentsFun(struct groupOfStudents student[3])
{
    printf("Please enter informations the students: \n");
    for (int i = 0; i < 3; i++)
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
struct groupOfStudents percentageFun(struct groupOfStudents student[3])
{
    float total = 0;
    printf("\nMaterial Percentage: ");
    for (int i = 0; i < 3; i++)
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

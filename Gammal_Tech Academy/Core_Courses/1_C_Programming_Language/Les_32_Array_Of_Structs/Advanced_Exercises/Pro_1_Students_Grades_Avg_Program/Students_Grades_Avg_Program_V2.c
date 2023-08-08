

/* >>> Students Grades and Avg Program ( Version 2 ) <<< */

/* >>> A program that stores a group of students and their grades in a group of materials (math, science, English) And assuming that each subject is of 200 degrees, the percentage of each subject is calculated and the total. <<< */

#include <stdio.h>
#include <string.h>

// Declaration struct;
struct students
{
    char name[25];
    float mathGrade;
    float scienceGrade;
    float englishGrade;
};

int main()
{
    printf("\n\nYou welcome in Students Grades and Avg Program ( Version 2 ) ..\n\n");

    struct students student[5];

    // Student 1;
    strcpy(student[0].name, "kifah");
    student[0].mathGrade = 200;
    student[0].scienceGrade = 200;
    student[0].englishGrade = 200;

    // Student 2;
    strcpy(student[1].name, "a");
    student[1].mathGrade = 190;
    student[1].scienceGrade = 190;
    student[1].englishGrade = 190;

    // Student 3;
    strcpy(student[2].name, "b");
    student[2].mathGrade = 180;
    student[2].scienceGrade = 180;
    student[2].englishGrade = 180;
    
    // Student 4;
    strcpy(student[3].name, "c");
    student[3].mathGrade = 170;
    student[3].scienceGrade = 170;
    student[3].englishGrade = 170;

    // Student 5;
    strcpy(student[4].name, "d");
    student[4].mathGrade = 160;
    student[4].scienceGrade = 160;
    student[4].englishGrade = 160;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Student %d Name : %s \n", i + 1, student[i].name);
        printf("math grade = %.2f , Avg math grade = %.2f \% \n", student[i].mathGrade, (student[i].mathGrade / 200) * 100);
        printf("science grade = %.2f , Avg science grade = %.2f \% \n", student[i].scienceGrade, (student[i].scienceGrade / 200) * 100);
        printf("english grade = %.2f , Avg english grade = %.2f \% \n", student[i].englishGrade, (student[i].englishGrade / 200) * 100);
        printf("Total grades : %.2f \n", student[i].mathGrade + student[i].scienceGrade + student[i].englishGrade);
        printf("Total Avg : %.2f \%\n", ((student[i].mathGrade / 600) * 100) + ((student[i].scienceGrade / 600) * 100) + ((student[i].englishGrade / 600) * 100));
        printf("\n");
    }
    printf("\n\n");

    return 0;
}


/* >>> Students Grades and Avg Program ( Version 3 ) <<< */

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
    printf("\n\nYou welcome in Students Grades and Avg Program ( Version 3 ) ..\n\n");

    struct students student[5];

    // Get information student;
    for (size_t i = 0; i < 5; i++)
    {
        printf("Please enter student %d name : ", i + 1);
        scanf("%s", student[i].name);

        printf("Math grade : ");
        scanf("%f", &student[i].mathGrade);

        printf("science grade : ");
        scanf("%f", &student[i].scienceGrade);

        printf("english grade : ");
        scanf("%f", &student[i].englishGrade);

        printf("\n");
    }

    // Print information student;
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
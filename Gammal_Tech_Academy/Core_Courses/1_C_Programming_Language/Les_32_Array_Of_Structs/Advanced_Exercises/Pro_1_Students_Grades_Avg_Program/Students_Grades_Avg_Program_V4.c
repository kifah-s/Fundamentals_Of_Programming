

/* >>> Students Grades and Avg Program ( Version 4 ) <<< */

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

void welcomeMassageFun();
void printingInformationStudentFun(struct students student[5]);

int main()
{
    welcomeMassageFun();

    struct students student[5] = {
        {"kifah", 200, 200, 200},
        {"a", 190, 190, 190},
        {"b", 180, 180, 180},
        {"c", 170, 170, 170},
        {"d", 160, 160, 160},
    };

    printingInformationStudentFun(student);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Students Grades and Avg Program ( Version 4 ) ..\n\n");
}

// Printing information student;
void printingInformationStudentFun(struct students student[5])
{
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
}


/* >>> Students Grades Avg Success or Failure Program ( Version 1 ) <<< */

/* >>> A program that stores a group of students and their grades in a group of materials (math, science, English) And assuming that each subject is of 200 degrees, the percentage of each subject is calculated and the total , if any degree less than 50% print ( F ) .. between 50% & 60% print ( D ) .. between 60% & 70% print ( C ) ..  between 70% & 80% print ( B ) ..  between 80% & 100% print ( A ). <<< */

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
    printf("\n\nYou welcome in Students Grades Avg Success or Failure Program ( Version 1 ) ..\n\n");

    struct students student[5] = {
        {"kifah", 200, 200, 200},
        {"a", 150, 150, 150},
        {"b", 130, 130, 130},
        {"c", 110, 110, 110},
        {"d", 99, 99, 99},
    };

    for (size_t i = 0; i < 5; i++)
    {
        printf("Student %d Name : %s \n", i + 1, student[i].name);

        printf("math grade = %.2f , Avg math grade = %.2f \% \n", student[i].mathGrade, (student[i].mathGrade / 200) * 100);
        if (student[i].mathGrade < (200 * 0.5))
        {
            printf("Math : F\n");
        }
        else if (student[i].mathGrade >= (200 * 0.5) && student[i].mathGrade < (200 * 0.6))
        {
            printf("Math : D\n");
        }
        else if (student[i].mathGrade >= (200 * 0.6) && student[i].mathGrade < (200 * 0.7))
        {
            printf("Math : C\n");
        }
        else if (student[i].mathGrade >= (200 * 0.7) && student[i].mathGrade < (200 * 0.8))
        {
            printf("Math : B\n");
        }
        else if (student[i].mathGrade >= (200 * 0.8) && student[i].mathGrade <= 200)
        {
            printf("Math : A\n");
        }


        printf("science grade = %.2f , Avg science grade = %.2f \% \n", student[i].scienceGrade, (student[i].scienceGrade / 200) * 100);
        if (student[i].scienceGrade < (200 * 0.5))
        {
            printf("science : F\n");
        }
        else if (student[i].scienceGrade >= (200 * 0.5) && student[i].scienceGrade < (200 * 0.6))
        {
            printf("science : D\n");
        }
        else if (student[i].scienceGrade >= (200 * 0.6) && student[i].scienceGrade < (200 * 0.7))
        {
            printf("science : C\n");
        }
        else if (student[i].scienceGrade >= (200 * 0.7) && student[i].scienceGrade < (200 * 0.8))
        {
            printf("science : B\n");
        }
        else if (student[i].scienceGrade >= (200 * 0.8) && student[i].scienceGrade <= 200)
        {
            printf("science : A\n");
        }

        printf("english grade = %.2f , Avg english grade = %.2f \% \n", student[i].englishGrade, (student[i].englishGrade / 200) * 100);
        if (student[i].englishGrade < (200 * 0.5))
        {
            printf("english : F\n");
        }
        else if (student[i].englishGrade >= (200 * 0.5) && student[i].englishGrade < (200 * 0.6))
        {
            printf("english : D\n");
        }
        else if (student[i].englishGrade >= (200 * 0.6) && student[i].englishGrade < (200 * 0.7))
        {
            printf("english : C\n");
        }
        else if (student[i].englishGrade >= (200 * 0.7) && student[i].englishGrade < (200 * 0.8))
        {
            printf("english : B\n");
        }
        else if (student[i].englishGrade >= (200 * 0.8) && student[i].englishGrade <= 200)
        {
            printf("english : A\n");
        }

        printf("Total grades : %.2f \n", student[i].mathGrade + student[i].scienceGrade + student[i].englishGrade);

        printf("Total Avg : %.2f \%\n", ((student[i].mathGrade / 600) * 100) + ((student[i].scienceGrade / 600) * 100) + ((student[i].englishGrade / 600) * 100));

        printf("\n");
    }
    printf("\n\n");

    return 0;
}


/* >>> Students And Grades Program ( Version 3 ) <<< */

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
    printf("\n\nYou welcome in Students And Grades Program ( Version 3 ) ..\n\n");

    struct students student[5];

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
    
    
    for (size_t i = 0; i < 5; i++)
    {
        printf("Student Name : %s - math grade : %d - science grade : %d - english grade : %d \n", student[i].name, student[i].math, student[i].science, student[i].english);
    }
    printf("\n\n");

    return 0;
}

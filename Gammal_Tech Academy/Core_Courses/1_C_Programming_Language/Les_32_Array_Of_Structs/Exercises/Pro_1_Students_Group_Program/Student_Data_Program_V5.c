

/* >>> Students Group Program ( Version 5 ) <<< */

/* >>> A program that stores data for a group of students and prints it side by side for each student in a line. <<< */

#include <stdio.h>
#include <string.h>

// structs ;
// Declaration struct;
struct students
{
    char name[25], phone[25];
    int grade;
};
// Declaration variable from struct;
struct students stu[5];

// functions;
void welcomeMassageFun();
int students_info();
int printing_structs();

int main()
{
    welcomeMassageFun();
    students_info();
    printing_structs();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Students Group Program ( Version 5 ) ..\n\n");
}

// Students info function;
int students_info()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Student (%d) :\n", i + 1);

        printf("Name : ");
        scanf("%s", stu[i].name);

        printf("Phone : ");
        scanf("%s", stu[i].phone);

        printf("Grade : ");
        scanf("%d", &stu[i].grade);

        printf("\n");
    }
}

// Printing struct students function;
int printing_structs()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Stu %d - Name : %s,  Phone : %s,   Grades = %d\n", i + 1, stu[i].name, stu[i].phone, stu[i].grade);
    }
    printf("\n\n");
}
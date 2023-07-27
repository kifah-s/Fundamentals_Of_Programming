

/* >>> Largest Mark Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter the name and sign of two students and prints the name of the student who receives the largest mark and with his mark. <<< */

#include <stdio.h>
#include <string.h>

// Declaration struct;
struct student
{
    char student_name[25];
    int student_grades;
};

// Declaration variable from struct;
struct student s_1;
struct student s_2;

void welcomeMassageFun();
int student_info();
int check_grade();

int main()
{
    welcomeMassageFun();

    student_info();
    check_grade();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Mark Program ( Version 3 ) ..\n\n");
}

// student info function;
int student_info()
{
    // Receive values from user;
    printf("Please enter first student name : \n");
    scanf("%s", s_1.student_name);
    printf("Please enter first student grades : \n");
    scanf("%d", &s_1.student_grades);

    printf("Please enter second student name : \n");
    scanf("%s", s_2.student_name);
    printf("Please enter second student grades : \n");
    scanf("%d", &s_2.student_grades);
}

int check_grade()
{
    // Check grade;
    if (s_1.student_grades > s_2.student_grades)
    {
        printf("\nStudent grade %s is largest", s_1.student_name);
    }
    else if (s_2.student_grades > s_1.student_grades)
    {
        printf("\nStudent grade %s is largest", s_2.student_name);
    }
    else
    {
        printf("\nStudents grade is same");
    }

    printf("\n\n\n");
}


/* >>> Students Group Program ( Version 1 ) <<< */

/* >>> A program that stores data for a group of students and prints it side by side for each student in a line. <<< */

#include <stdio.h>
#include <string.h>

// Declaration struct;
struct students
{
    char name[25], phone[25];
    int grade;
};
// Declaration variable from struct;
struct students stu[5];

// Functions;
int students_group();

int main()
{
    printf("\n\nYou welcome in Students Group Program ( Version 1 ) ..\n\n");

    students_group();

    return 0;
}

// Functions;
// students group function;
int students_group()
{
    // Creat structs;
    strcpy(stu[0].name, "kifah");
    strcpy(stu[0].phone, "00963998621421");
    stu[0].grade = 98;

    strcpy(stu[1].name, "aa");
    strcpy(stu[1].phone, "000000000000000");
    stu[1].grade = 60;

    strcpy(stu[2].name, "bb");
    strcpy(stu[2].phone, "111111111111111");
    stu[2].grade = 80;

    strcpy(stu[3].name, "cc");
    strcpy(stu[3].phone, "2222222222222222");
    stu[3].grade = 100;

    strcpy(stu[4].name, "dd");
    strcpy(stu[4].phone, "3333333333333333");
    stu[4].grade = 75;

    // Printing structs function;
    for (int i = 0; i < 5; i++)
    {
        printf("Stu %d - Name : %s,  Phone : %s,   Grades = %d\n", i + 1, stu[i].name, stu[i].phone, stu[i].grade);
    }

    printf("\n\n");
}
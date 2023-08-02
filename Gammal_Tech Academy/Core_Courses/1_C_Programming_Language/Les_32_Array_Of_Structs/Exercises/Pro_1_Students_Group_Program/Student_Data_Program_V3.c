

/* >>> Students Group Program ( Version 3 ) <<< */

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
struct students stu[5] = {
    {"kifah", "00963998621421", 98},
    {"aa", "00000000000000", 60},
    {"bb", "11111111111111", 75},
    {"cc", "22222222222222", 100},
    {"dd", "33333333333333", 95}};

// Functions;
int printing_structs();

int main()
{
    printf("\n\nYou welcome in Students Group Program ( Version 3 ) ..\n\n");

    printing_structs();

    return 0;
}

// Functions ..
// Printing struct students;
int printing_structs()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Stu %d - Name : %s,  Phone : %s,   Grades = %d\n", i + 1, stu[i].name, stu[i].phone, stu[i].grade);
    }
    printf("\n\n");
}
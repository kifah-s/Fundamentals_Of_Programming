

/* >>> Student Data Program ( Version 3 ) <<< */

/* >>> A program that stores student data in struct (name, age, total grades) and prints it. <<< */

#include <stdio.h>
#include <string.h>

int structs();

int main()
{
    printf("\n\nYou welcome in Student Data Program ( Version 3 ) ..\n\n");

    structs();

    return 0;
}

// Functions ..
// structs function;
int structs()
{
    // Structs ..
    struct student
    {
        char name[25];
        int age, total_grades;
    };

    struct student s_1 = {"kifah", 27, 98};

    printf("Name : %s,  Age : %d,   Total grades = %d\n\n", s_1.name, s_1.age, s_1.total_grades);

    return 0;
}

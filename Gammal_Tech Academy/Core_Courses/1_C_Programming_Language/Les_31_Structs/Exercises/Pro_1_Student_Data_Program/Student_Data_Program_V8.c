

/* >>> Student Data Program ( Version 8 ) <<< */

/* >>> A program that stores student data in struct (name, age, total grades) and prints it. <<< */

#include <stdio.h>
#include <string.h>

// Struct ..
// student Struct;
struct student
{
    char name[25];
    int age, total_degrees;
};

void welcomeMassageFun();
int student1Fun();

int main()
{
    welcomeMassageFun();

    student1Fun();

    struct student s_2;
    strcpy(s_2.name, "kifah");
    s_2.age = 26;
    s_2.total_degrees = 98;
    printf("\nName : %s,  Age : %d,   Total degrees = %d\n\n", s_2.name, s_2.age, s_2.total_degrees);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Student Data Program ( Version 8 ) ..\n\n");
}

// student 1 function;
int student1Fun()
{
    struct student s_1;

    printf("What's your name ? ");
    scanf("%s", s_1.name);

    printf("How old are you ? ");
    scanf("%d", &s_1.age);

    printf("Enter Total degrees ? ");
    scanf("%d", &s_1.total_degrees);

    printf("\nName : %s,  Age : %d,   Total degrees = %d\n\n", s_1.name, s_1.age, s_1.total_degrees);

    return 0;
}

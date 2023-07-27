

/* >>> Student Data Program ( Version 5 ) <<< */

/* >>> A program that stores student data in struct (name, age, total grades) and prints it. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int structs();

int main()
{
    welcomeMassageFun();
    
    structs();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Student Data Program ( Version 5 ) ..\n\n");
}

// structs function;
int structs()
{
    // Structs ..
    struct student
    {
        char name[25];
        int age, total_degrees;
    };

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

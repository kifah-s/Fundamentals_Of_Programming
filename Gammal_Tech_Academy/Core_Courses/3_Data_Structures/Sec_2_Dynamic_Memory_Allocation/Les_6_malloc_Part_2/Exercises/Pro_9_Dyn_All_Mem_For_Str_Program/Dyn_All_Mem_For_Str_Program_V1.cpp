
//* Dynamically Allocates Memory For Structures Program (Version 1).

/*
* Create a program that dynamically allocates memory for a structure representing a student with name and age.

! Output:
! Student: Kifah, Age: 24
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <stdlib.h>
#include <cstring>

using namespace std;

//* Structs ..
struct Student
{
    char name[50];
    int age;
};
//* End Structs ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Structures Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
Student *dynamicMemoryAllocationFun(Student *stu, int s)
{
    stu = (Student *)malloc(s * sizeof(Student));
    return stu;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(Student *stu)
{
    if (stu == nullptr)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }
    return 0;
}

// Initialize Structs - Function.
Student *initializeStructsFun(Student *stu, int s)
{
    strcpy(stu->name, "Kifah");
    stu->age = 24;

    return stu;
}

// Print Structs Informations - Function.
void printStructsInformationsFun(Student *stu, int s)
{
    cout << "Student: " << "Name: " << stu->name << ", Age: " << stu->age << endl;
}

// Freeing Memory - Function.
void freeingMemoryFun(Student *stu)
{
    free(stu);
}

// Result - Function.
int resultFun()
{
    // Declare Pointer and Variables.
    Student *student_1;
    int size = 1;

    // Call Functions.
    printWelcomeMessageFun();

    student_1 = dynamicMemoryAllocationFun(student_1, size);
    checkMemoryAllocationFun(student_1);
    student_1 = initializeStructsFun(student_1, size);
    printStructsInformationsFun(student_1, size);
    freeingMemoryFun(student_1);

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

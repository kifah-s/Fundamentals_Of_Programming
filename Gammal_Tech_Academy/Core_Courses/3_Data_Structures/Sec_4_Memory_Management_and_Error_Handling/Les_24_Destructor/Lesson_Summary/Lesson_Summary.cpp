
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary .." << endl
         << endl;
}

//* End Functions ..

//* Classes ..

// Create new class.
class student
{
private:
    string stuName;
    int stuAge;

public:
    // Create constructor.
    student()
    {
        cout << "Create new classes." << endl;
    };

    // Create destructor.
    ~student()
    {
        cout << "Delete classes." << endl;
    };
};

//* End Classes ..

int main()
{
    lessonSummaryFun();

    //* -------------------------------------

    //* malloc vs new On the one hand constructor and destructor in class.

    //* -------------------------------------

    // student s1;

    //* -------------------------------------

    // student *s1 = (student *)malloc(sizeof(student));
    // free(s1);

    // cout << "Hello World" << endl;

    //* -------------------------------------

    // student *s1 = new student;
    // delete (s1);

    // cout << "\nHello World" << endl;

    //* -------------------------------------

    cout << endl;

    return 0;
}

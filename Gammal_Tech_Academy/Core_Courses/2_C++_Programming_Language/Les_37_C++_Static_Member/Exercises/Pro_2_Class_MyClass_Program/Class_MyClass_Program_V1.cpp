
//* Class MyClass Program (Version 1).

/*
* create a C++ program with a class MyClass that includes a static member variable count.
* The class should have a constructor that increments the count every time an object is created.
* In the main function, create three objects of the class and print the total number of objects created.

! Output:
! Number of object: 3.
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

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Class ..
class MyClass
{
private:
public:
    static int counter;

    MyClass()
    {
        counter++;
    }
};

int MyClass ::counter = 0;
//* End Class ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class MyClass Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Objects.
    MyClass c1;
    MyClass c2;
    MyClass c3;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Number of object: " << MyClass ::counter;

    cout << "\n"
         << endl;
}
//* End Function ..

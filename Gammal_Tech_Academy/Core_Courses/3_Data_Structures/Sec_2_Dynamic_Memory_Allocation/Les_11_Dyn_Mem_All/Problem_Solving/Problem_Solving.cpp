
//*  Problem Solving ..

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

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline after N

    // Dynamic memory allocation for storing course names
    string *courses = new string[N];
    
    // Reading course names
    for (int i = 0; i < N; ++i)
    {
        getline(cin, courses[i]);
    }
    
    // Output each course name
    for (int i = 0; i < N; ++i)
    {
        cout << "Course " << (i + 1) << ": " << courses[i] << endl;
    }
    
    // Free the allocated memory
    delete[] courses;

    cout << endl
         << endl;

    return 0;
}

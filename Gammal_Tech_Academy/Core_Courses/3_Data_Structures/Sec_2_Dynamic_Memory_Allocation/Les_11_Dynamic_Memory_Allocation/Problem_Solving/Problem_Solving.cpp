
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

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

    cout << endl;

    return 0;
}

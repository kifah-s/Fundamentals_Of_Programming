
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    string pattern;
    cin >> pattern;

    // Design Pattern Type
    cout << "Design Pattern Type: " << pattern[0] << endl;
    
    // Project Code
    cout << "Project Code: " << pattern.substr(1, 2) << endl;
    
    // Attributes
    for (size_t i = 3; i < pattern.length(); i += 2)
    {
        cout << "Attribute " << pattern[i] << ": " << pattern[i + 1] << endl;
    }

    cout << "\n\n";

    return 0;
}

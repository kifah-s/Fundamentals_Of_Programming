
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

    // Allocating memory using calloc
    int *projects = (int *)calloc(N, sizeof(int));
    
    // Checking if memory allocation was successful
    if (projects == NULL)
    {
        cerr << "Memory allocation failed";
        return 1;
    }
    
    // Reading the number of employees for each project
    for (int i = 0; i < N; i++)
    {
        cin >> projects[i];
    }
    
    // Printing the employee allocation
    for (int i = 0; i < N; i++)
    {
        cout << "Project " << (i + 1) << ": " << projects[i] << "Employees " << endl;
    }
    
    // Freeing the allocated memory
    free(projects);

    cout << endl
         << endl;

    return 0;
}

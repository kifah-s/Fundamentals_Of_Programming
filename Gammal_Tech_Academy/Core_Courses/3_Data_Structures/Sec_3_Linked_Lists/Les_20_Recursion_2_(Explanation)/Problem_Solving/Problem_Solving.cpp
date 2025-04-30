
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

int calculateInnovationIndex(int level)
{
    if (level == 1)
    {
        return 1;
    }
    return calculateInnovationIndex(level - 1) + (level - 1);
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int complexityLevel;
    cin >> complexityLevel;
    
    cout << calculateInnovationIndex(complexityLevel) << endl;

    cout << endl
         << endl;

    return 0;
}


//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

bool isSuitable(string skills, int hours)
{
    if (hours <= 40)
        return false;
    bool hasCppOrPython = skills.find("C++") != string::npos ||
                          skills.find("Python") != string::npos;
    return hasCppOrPython;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    cin >> n;
    cin.ignore(); // To handle the newline after reading integer.
    vector<string> suitableCandidates;
    for (int i = 0; i < n; i++)
    {
        string input;
        getline(cin, input);
        stringstream ss(input);
        string name, skills;
        int hours;
        getline(ss, name, ';');
        getline(ss, skills, ';');
        ss >> hours;
        if (isSuitable(skills, hours))
        {
            suitableCandidates.push_back(name);
        }
    }
    if (suitableCandidates.empty())
    {
        cout << "No suitable candidate found." << endl;
    }
    else
    {
        for (const string &name : suitableCandidates)
        {
            cout << name << endl;
        }
    }

    cout << "\n\n";

    return 0;
}

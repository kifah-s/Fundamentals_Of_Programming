
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>

using namespace std;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

bool isVirusDetected(const vector<string> &virusSignatures, const string &code)
{
    for (const string &signature : virusSignatures)
    {
        if (code.find(signature) != string::npos)
        {
            return true;
        }
    }
    return false;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    cin >> n;

    vector<string> virusSignatures(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> virusSignatures[i];
    }

    string code;
    cin >> code;
    
    if (isVirusDetected(virusSignatures, code))
    {
        cout << "Virus Detected" << endl;
    }
    else
    {
        cout << "No Virus Detected" << endl;
    }

    cout << "\n\n";

    return 0;
}

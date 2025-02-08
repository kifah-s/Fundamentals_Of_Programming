
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
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

    map<string, string> os_descriptions = {
        {"Windows", "A versatile OS with a wide range of applications."},
        {"macOS", "Known for its sleek design and efficient performance."},
        {"Linux", "A robust OS preferred for its security and flexibility."},
        {"Android", "A popular mobile OS with extensive customization options."},
        {"iOS", "A user-friendly mobile OS known for its smoothinterface."}};

    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        string os;
        cin >> os;
        cout << os_descriptions[os] << endl;
    }

    cout << "\n\n";

    return 0;
}

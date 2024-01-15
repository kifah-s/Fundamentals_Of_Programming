

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x = "7654";
    int y = -1;

    try
    {
        y = stoi(x.c_str());
    }

    catch (exception e)
    {
        cout << "Error" << endl;
        y = -1;
    }

    if (y != -1)
        cout << y + 1 << endl;

    return 0;
}

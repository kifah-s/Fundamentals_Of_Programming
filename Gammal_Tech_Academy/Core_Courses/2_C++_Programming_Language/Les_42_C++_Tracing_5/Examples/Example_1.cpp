

/* >>> Example 1 <<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // any number

int main()
{
    for (int i = 0; i < x.size(); i++)
    {
        cout << (char)x[i];
    }
    cout << endl;

    return 0;
}

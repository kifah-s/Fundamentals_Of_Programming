

/* >>> Example 1 <<< */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x = {67, 111, 110, 103, 114, 97, 116, 117, 108, 97, 116, 105, 111, 110, 115, 44, 32, 121, 111, 117, 32, 104, 97, 118, 101, 32, 106, 117, 115, 116, 32, 102, 105, 110, 105, 115, 104, 101, 100, 32, 116, 104, 101, 32, 67, 43, 43, 32, 112, 114, 111, 103, 114, 97, 109, 109, 105, 110, 103, 32, 99, 111, 117, 114, 115, 101, 44, 32, 105, 116, 39, 115, 32, 116, 105, 109, 101, 32, 116, 111, 32, 115, 116, 97, 114, 116, 32, 108, 101, 97, 114, 110, 105, 110, 103, 32, 68, 97, 116, 97, 32, 83, 116, 114, 117, 99, 116, 117, 114, 101, 115, 10};

    for (int i = 0; i < x.size(); i++)
    {
        cout << (char)x[i];
    }

    return 0;
}

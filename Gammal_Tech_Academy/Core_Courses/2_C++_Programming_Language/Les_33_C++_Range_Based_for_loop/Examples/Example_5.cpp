

/* >>> Example 5 <<< */

#include <iostream>

using namespace std;

int main()
{
    for (auto i : {5, 3, 6, 9, 8, 7, 4})
        cout << i << " ";

    cout << endl;

    for (auto i : {"www", "gammal", "tech"})
        cout << i << " ";

    return 0;
}
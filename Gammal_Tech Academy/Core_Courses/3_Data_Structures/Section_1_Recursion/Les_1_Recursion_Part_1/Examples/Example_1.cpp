
//* >>>>> Example 1 <<<<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Examples / Function.
void examplesFun()
{
    cout << endl
         << "Example 1 .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    examplesFun();

    int x = 5, i;

    for (i = x; i > 0; i--)
    {
        cout << i << " ";
    }

    cout << endl
         << endl;

    return 0;
}


//* >>>>> Example 3 <<<<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Examples / Function.
void examplesFun()
{
    cout << endl
         << "Example 3 .." << endl
         << endl;
}

void recFun(int x)
{
    if (x == 0)
    {
        return;
    }

    recFun(x - 1);

    cout << x << " ";
}

//* End Functions ..

int main()
{
    examplesFun();

    int x = 5;

    recFun(x);

    cout << endl
         << endl;

    return 0;
}

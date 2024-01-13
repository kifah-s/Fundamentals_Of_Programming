
//* >>>>> Example 2 <<<<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Examples / Function.
void examplesFun()
{
    cout << "\nExample 2 ..\n\n";
}

void recFun(int x)
{
    if (x == 0)
    {
        return;
    }

    cout << x << " ";

    recFun(x - 1);
}

//* End Functions ..

int main()
{
    examplesFun();

    //* ________________________________________________________________

    int x = 5;
    
    recFun(x);

    //* ________________________________________________________________

    cout << "\n\n";

    return 0;
}

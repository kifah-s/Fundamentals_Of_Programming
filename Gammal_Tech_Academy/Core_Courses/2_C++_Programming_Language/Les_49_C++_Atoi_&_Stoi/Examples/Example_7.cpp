

/* >>> Example 7 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x = "a";

    int y = atoi(x.c_str());
    
    cout << y + 1 << endl;

    return 0;
}

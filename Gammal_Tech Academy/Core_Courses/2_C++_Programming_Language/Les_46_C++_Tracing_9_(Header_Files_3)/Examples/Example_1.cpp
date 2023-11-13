

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

namespace gammal
{
    int g = 200;
    string website = "hello gammal tech";
    string returnd()
    {
        return "welcome in gammal tech";
    }
}

namespace gammal_tech
{
    int g = 500;
    string website = "hi gammal tech";
    string returnd()
    {
        return "search for gammal tech";
    }
}

using namespace gammal;

int main()
{
    cout << g << endl;
    cout << gammal_tech::g << endl;
    cout << returnd() << endl;
}


// code in File "gammal.h"

#include <iostream>
#include <string>

using namespace std;

class gammal
{
private:
    string membership;

public:
    gammal(string x)
    {
        if (x == "c" || x == "year")
            membership = x;
        else
            cout << "error";
    }

    void membership_type()
    {
        if (membership == "c")
            cout << membership << endl;
        else if (membership == "year")
            cout << membership << endl;
    }

    void upgrade()
    {
        if (membership == "c")
            cout << "upgrade to yearly" << endl;
        else if (membership == "year")
            cout << "upgrade to all life" << endl;
    }
};

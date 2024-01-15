

/* >>> Example 3 <<< */

#include <iostream>
#include <string>

using namespace std;

class Gammal_Tech_Member
{
private:
    string name, cell;
    int days;

public:
    Gammal_Tech_Member()
    {
        name = "Gammal Tech New User";
        cell = "No Cell";
        days = 0;
    }

    void print()
    {
        cout << endl
             << name << endl;
        cout << cell << endl;
        cout << days << endl
             << endl;
    }
};
int main()
{
    Gammal_Tech_Member x;
    x.print();

    return 0;
}
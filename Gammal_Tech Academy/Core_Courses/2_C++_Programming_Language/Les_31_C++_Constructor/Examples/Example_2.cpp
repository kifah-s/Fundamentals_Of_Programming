

/* >>> Example 2 <<< */

#include <iostream>
#include <string>

using namespace std;

class Gammal_Tech_Member
{
private:
    string name, cell;
    int days;

public:
    Gammal_Tech_Member(string c)
    {
        name = "Gammal Tech New User";
        cell = c;
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
    Gammal_Tech_Member x("+201033998844");
    x.print();

    return 0;
}
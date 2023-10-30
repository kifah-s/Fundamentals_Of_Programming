

/* >>> Example 4 <<< */

#include <iostream>
#include <string>

using namespace std;

class Gammal_Tech_member
{
private:
    string name, cell;
    int days;

public:
    Gammal_Tech_member(string c)
    {
        name = "Gammal Tech New User";
        cell = c;
        days = 0;
    }

    Gammal_Tech_member(string n, string c, int d)
    {
        name = n;
        cell = c;
        days = d;
    }

    void print()
    {
        cout << endl
             << name << endl;
        cout << cell << endl;
        cout << days << endl;
    }
};

int main()
{
    Gammal_Tech_member x("123123123");
    x.print();
    
    Gammal_Tech_member y("Abdulrahman", "012334567", 30);
    y.print();

    return 0;
}

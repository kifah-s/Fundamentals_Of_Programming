

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string name;
    int c, cpp;

public:
    void setname(string x)
    {
        if (x != "gammal")
            name = x;
        else
            name = "error";
    }
    void setC(int x)
    {
        c = x;
        if (c < 85)
            cpp = 0;
    }
    void setCpp(int x)
    {
        if (c >= 85)
            cpp = x;
        else
            cpp = 0;
    }
    void print()
    {
        cout << name << endl;
        cout << c << endl;
        cout << cpp << endl;
    }
};

int main()
{
    student gammal[100];
    gammal[0].setname("Ahmed");
    gammal[0].setC(50);
    gammal[0].setCpp(20);
    gammal[0].print();

    return 0;
}

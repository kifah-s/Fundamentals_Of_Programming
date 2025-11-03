#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsA
{
private:
    int _Var1;

protected:
    int _Var2;

public:
    int Var3;

    clsA()
    {
        _Var1 = 10;
        _Var2 = 20;
        Var3 = 30;
    }

    friend int MySum(clsA A1); // Friend function.
};

// This function is normal function and not a member of any class.
int MySum(clsA A1)
{
    return A1._Var1 + A1._Var2 + A1.Var3;
}

// int Fun2(clsA A1)
// {
//     return A1._Var1 + A1._Var2 + A1.Var3;
// }

int main()
{
    WelcomeMessage();

    clsA A1;
    cout << MySum(A1) << endl;

    cout << endl
         << endl;

    return 0;
}
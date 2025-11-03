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

    // This will grant access for everything to class B.
    friend class clsB; // Friend class.
};

class clsB
{
public:
    void display(clsA A1)
    {
        cout<< "The value of Var1: " << A1._Var1 << endl; // _Var1 is private in class clsA.
        cout<< "The value of Var2: " << A1._Var2 << endl; // _Var2 is protected in class clsA.
        cout<< "The value of Var3: " << A1.Var3 << endl; // Var3 is public in class clsA.
    }
};

int main()
{
    WelcomeMessage();

    clsA A1;
    clsB B1;

    B1.display(A1);

    cout << endl
         << endl;

    return 0;
}
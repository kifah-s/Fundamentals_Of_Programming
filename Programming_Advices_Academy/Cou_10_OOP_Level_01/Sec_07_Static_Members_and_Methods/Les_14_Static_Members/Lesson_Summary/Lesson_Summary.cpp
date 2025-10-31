#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsA
{
public:
    int var;
    static int counter;

    clsA()
    {
        counter++;
    }

    void Print()
    {
        cout << "\nvar     = " << var << endl;
        cout << "counter = " << counter << endl;
    }
};

// static variable initialisation outside the class.
int clsA::counter = 0;

int main()
{
    WelcomeMessage();

    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;
    A1.Print();
    A2.Print();
    A3.Print();

    A1.counter = 500;
    cout << "\nafter chaning the static member counter in one object:\n";
    A1.Print();
    A2.Print();
    A3.Print();

    cout << endl
         << endl;

    return 0;
}
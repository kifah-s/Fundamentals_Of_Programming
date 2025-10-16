#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* Call By Value.
void Function1(int x)
{
    x++;
}

//* Call By Reference.
void Function2(int &x)
{
    x++;
}

int main()
{
    WelcomeMessage();

    int num = 10;

    cout << "num: " << num << endl;
    cout << "&num: " << &num << endl;

    Function1(num);
    cout << "After calling function 1: " << num << endl;
    
    Function2(num);
    cout << "After calling function 2: " << num << endl;


    cout << endl
         << endl;

    return 0;
}
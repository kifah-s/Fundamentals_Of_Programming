#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    vector<int> vecNumbers = {10, 20, 30, 40, 50};

    //* Declare iterator.
    vector<int>::iterator iter;

    //* Use iterator with for loop.
    for (iter = vecNumbers.begin(); iter != vecNumbers.end(); iter++)
    {
        cout << *iter << " ";
    }

    cout << endl
         << endl;

    return 0;
}
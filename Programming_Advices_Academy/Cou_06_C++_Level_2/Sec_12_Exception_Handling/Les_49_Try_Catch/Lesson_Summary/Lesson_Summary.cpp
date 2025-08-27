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

    vector<int> vecNumbers = {1, 2, 3, 4, 5};

    try
    {
        cout << vecNumbers.at(10) << endl;
    }
    catch (...)
    {
        cout << "Out of bound" << endl;
    }

    cout << endl
         << endl;

    return 0;
}
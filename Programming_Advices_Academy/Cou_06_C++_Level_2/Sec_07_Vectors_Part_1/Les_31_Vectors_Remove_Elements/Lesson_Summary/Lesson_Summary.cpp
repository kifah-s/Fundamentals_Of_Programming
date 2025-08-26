#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    vector<int> vecNumbers;

    vecNumbers.push_back(10);
    vecNumbers.push_back(20);
    vecNumbers.push_back(30);
    vecNumbers.push_back(40);
    vecNumbers.push_back(50);

    cout << "Numbers: ";
    for (int &number : vecNumbers)
    {
        cout << number << " ";
    }
    cout << "\nStack Size: " << vecNumbers.size() << endl;

    //* ------------------------------------------------------------

    // vecNumbers.pop_back();
    // vecNumbers.pop_back();
    // vecNumbers.pop_back();
    // vecNumbers.pop_back();
    // vecNumbers.pop_back();

    // cout << "\nNumbers: ";
    // for (int &number : vecNumbers)
    // {
    //     cout << number << " ";
    // }

    vecNumbers.clear();

    cout << "\nStack Size: " << vecNumbers.size() << endl;

    // if (!vecNumbers.empty())
    // {
    //     vecNumbers.pop_back();
    // }

    // if (vecNumbers.size() > 0)
    // {
    //     vecNumbers.pop_back();
    // }

    cout << endl
         << endl;

    return 0;
}
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

    cout << endl
         << endl;

    return 0;
}
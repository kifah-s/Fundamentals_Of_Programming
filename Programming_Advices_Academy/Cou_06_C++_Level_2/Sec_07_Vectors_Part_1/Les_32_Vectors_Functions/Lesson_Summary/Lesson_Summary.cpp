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

    cout << "First Element: " << vecNumbers.front() << endl;
    cout << "Last Element: " << vecNumbers.back() << endl;
    cout << "Size: " << vecNumbers.size() << endl;
    cout << "Capacity: " << vecNumbers.capacity() << endl;
    cout << "Empty: " << vecNumbers.empty() << endl;
    // cout << "Clear: " << vecNumbers.clear() << endl;

    cout << endl
         << endl;

    return 0;
}
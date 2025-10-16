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

    cout << "Using .at(i):" << endl;
    cout << "Element at index 0: " << vecNumbers.at(0) << endl;
    cout << "Element at index 1: " << vecNumbers.at(1) << endl;
    cout << "Element at index 2: " << vecNumbers.at(2) << endl;
    cout << "Element at index 3: " << vecNumbers.at(3) << endl;
    cout << "Element at index 4: " << vecNumbers.at(4) << endl;

    cout << "-------------------------------------" << endl;

    cout << "Using [i]:" << endl;
    cout << "Element at index 0: " << vecNumbers[0] << endl;
    cout << "Element at index 1: " << vecNumbers[1] << endl;
    cout << "Element at index 2: " << vecNumbers[2] << endl;
    cout << "Element at index 3: " << vecNumbers[3] << endl;
    cout << "Element at index 4: " << vecNumbers[4] << endl;

    cout << endl
         << endl;

    return 0;
}
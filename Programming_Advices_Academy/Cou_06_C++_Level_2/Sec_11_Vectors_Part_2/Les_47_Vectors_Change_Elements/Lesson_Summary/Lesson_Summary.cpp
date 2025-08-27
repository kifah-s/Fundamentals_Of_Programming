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

    // vector<int> vecNumbers = {10, 20, 30, 40, 50};

    // cout << "Element at index 0: " << vecNumbers[0] << endl;
    // cout << "Element at index 1: " << vecNumbers[1] << endl;
    // cout << "Element at index 2: " << vecNumbers[2] << endl;
    // cout << "Element at index 3: " << vecNumbers[3] << endl;
    // cout << "Element at index 4: " << vecNumbers[4] << endl;

    // cout << "-------------------------------------" << endl;

    // vecNumbers.at(0) = 50;
    // vecNumbers.at(1) = 40;
    // vecNumbers.at(2) = 30;
    // vecNumbers.at(3) = 20;
    // vecNumbers.at(4) = 10;

    // vecNumbers[0] = 50;
    // vecNumbers[1] = 40;
    // vecNumbers[2] = 30;
    // vecNumbers[3] = 20;
    // vecNumbers[4] = 10;

    // cout << "Element at index 0: " << vecNumbers[0] << endl;
    // cout << "Element at index 1: " << vecNumbers[1] << endl;
    // cout << "Element at index 2: " << vecNumbers[2] << endl;
    // cout << "Element at index 3: " << vecNumbers[3] << endl;
    // cout << "Element at index 4: " << vecNumbers[4] << endl;

    //* ---------------------------------------------------------------------------------

    vector<int> vecNumbers = {10, 20, 30, 40, 50};

    cout << "Initial Vector: ";
    for (const int &i : vecNumbers)
    {
        // i = 20; //* Error.
        cout << i << " ";
    }

    cout << "\n\nUpdate Vector: ";
    for (int &i : vecNumbers)
    {
        i = 20;
        cout << i << " ";
    }

    vecNumbers.at(0) = 60;
    vecNumbers.at(1) = 70;
    vecNumbers[2] = 80;
    vecNumbers[3] = 90;
    vecNumbers[4] = 100;

    cout << "\n\nUpdate Vector: ";
    for (int &i : vecNumbers)
    {
        cout << i << " ";
    }

    cout << endl
         << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void AddNewNumber(vector<int> &vecNumbers)
{
    int number = 0;
    char answer = 'y';

    do
    {
        cout << "Please, enter a number: ";
        cin >> number;
        vecNumbers.push_back(number);

        cout << "Do you want add a new number (y / n)? ";
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');
}

void PrintNumbers(vector<int> &vecNumbers)
{
    AddNewNumber(vecNumbers);

    cout << "Numbers: ";
    for (int &number : vecNumbers)
    {
        cout << number << " ";
    }
}

int main()
{
    WelcomeMessage();

    vector<int> vecNumbers;
    PrintNumbers(vecNumbers);

    cout << endl
         << endl;

    return 0;
}
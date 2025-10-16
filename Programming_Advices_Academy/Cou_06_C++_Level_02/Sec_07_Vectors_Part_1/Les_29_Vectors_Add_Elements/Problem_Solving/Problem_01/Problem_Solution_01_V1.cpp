#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void AddNumber(vector<int> &vecNumbers)
{
    int number = 0;
    cout << "Please, enter a number: ";
    cin >> number;

    vecNumbers.push_back(number);
}

void AddNewNumber(vector<int> &vecNumbers)
{
    char answer = 'y';

    do
    {
        AddNumber(vecNumbers);
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
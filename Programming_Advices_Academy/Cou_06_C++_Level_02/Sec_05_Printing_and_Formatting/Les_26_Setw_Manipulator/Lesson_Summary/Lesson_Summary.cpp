#include <iostream>
#include <iomanip> // this library stored the std::setw

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |               Name             |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;
    cout << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
    cout << "---------|--------------------------------|---------|" << endl;

    cout << endl
         << endl;

    return 0;
}
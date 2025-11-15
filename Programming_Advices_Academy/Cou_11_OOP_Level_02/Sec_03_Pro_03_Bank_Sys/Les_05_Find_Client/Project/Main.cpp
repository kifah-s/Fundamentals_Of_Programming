#include <iostream>
#include "Classes/Bank_System_Classes/clsBankClient.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    clsBankClient Client1 = clsBankClient::Find("A101");
    Client1.Print();
    
    clsBankClient Client2 = clsBankClient::Find("A101", "12345");
    Client2.Print();

    cout << endl
         << endl;

    return 0;
}
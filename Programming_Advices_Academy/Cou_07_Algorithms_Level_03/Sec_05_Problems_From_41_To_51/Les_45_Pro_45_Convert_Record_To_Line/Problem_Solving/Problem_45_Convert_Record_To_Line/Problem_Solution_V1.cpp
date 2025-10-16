#include <iostream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stClintData
{
    string accountNumber = "";
    string pinCode = "";
    string name = "";
    string phoneNumber = "";
    string accountBalance = "";
};

stClintData ReadClintData()
{
    stClintData clint;

    cout << "Please, enter clint data: " << endl;

    cout << "Please, enter account number: ";
    cin >> clint.accountNumber;

    cout << "Please, enter pin code: ";
    cin >> clint.pinCode;

    cout << "Please, enter name: ";
    cin >> clint.name;

    cout << "Please, enter phone number: ";
    cin >> clint.phoneNumber;

    cout << "Please, enter account balance: ";
    cin >> clint.accountBalance;

    return clint;
}

void PrintClintData(stClintData clint)
{
    cout << "\n\nClint data: " << endl;
    cout << "Account number: " << clint.accountNumber << endl;
    cout << "Pin code: " << clint.pinCode << endl;
    cout << "Name: " << clint.name << endl;
    cout << "Phone number: " << clint.phoneNumber << endl;
    cout << "Account balance: " << clint.accountBalance << endl;
}

string ConvertRecordToLine(stClintData clint)
{
    string clintDataInLine = "";

    clintDataInLine = clint.accountNumber + "#//#" + clint.pinCode + "#//#" + clint.name + "#//#" + clint.phoneNumber + "#//#" + clint.accountBalance;

    return clintDataInLine;
}

int main()
{
    WelcomeMessage();

    stClintData clint_1;

    clint_1 = ReadClintData();

    cout << "\n\nClint record for saving is: ";
    cout << ConvertRecordToLine(clint_1) << endl;

    cout << endl
         << endl;

    return 0;
}
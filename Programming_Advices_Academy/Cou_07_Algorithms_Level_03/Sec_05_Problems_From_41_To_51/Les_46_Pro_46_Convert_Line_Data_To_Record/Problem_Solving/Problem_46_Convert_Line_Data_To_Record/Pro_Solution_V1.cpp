#include <iostream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

enum enClintDetails
{
    accountNumber,
    pinCode,
    name,
    phone,
    accountBalance
};

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
};

vector<string> SplitString(string myString, string delim)
{
    vector<string> vecString;
    short postion = 0;
    string word = "";

    while ((postion = myString.find(delim)) != std::string::npos)
    {
        word = myString.substr(0, postion);

        if (word != "")
        {
            vecString.push_back(word);
        }

        myString.erase(0, postion + delim.length());
    }

    if (myString != "")
    {
        vecString.push_back(myString);
    }

    return vecString;
}

stClient ConvertLineToRecord(string line, string sep)
{
    stClient clint;
    vector<string> vecString;

    vecString = SplitString(line, sep);

    clint.accountNumber = vecString[enClintDetails::accountNumber];
    clint.pinCode = vecString[enClintDetails::pinCode];
    clint.name = vecString[enClintDetails::name];
    clint.phone = vecString[enClintDetails::phone];
    clint.accountBalance = stod(vecString[enClintDetails::accountBalance]);

    return clint;
}

void PrintClientRecord(stClient client)
{
    cout << "Account number: " << client.accountNumber << endl;
    cout << "Pin code: " << client.pinCode << endl;
    cout << "Name: " << client.name << endl;
    cout << "Phone number: " << client.phone << endl;
    cout << "Account balance: " << client.accountBalance << endl;
}

int main()
{
    WelcomeMessage();

    string line;
    stClient client;

    line = "A150#//#1234#//#kifah saloum#//#0998621421#//#1000";

    cout << "Line Record Is: ";
    cout << line << endl;

    client = ConvertLineToRecord(line, "#//#");
    cout << "\nThe following is the extracted clint record:" << endl;
    PrintClientRecord(client);

    cout << endl
         << endl;

    return 0;
}
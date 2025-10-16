#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

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

vector<string> SplitLine(string line, string delim)
{
    vector<string> vecString;
    short postion = 0;
    string word = "";

    while ((postion = line.find(delim)) != std::string::npos)
    {
        word = line.substr(0, postion);

        if (word != "")
        {
            vecString.push_back(word);
        }

        line.erase(0, postion + delim.length());
    }

    if (line != "")
    {
        vecString.push_back(line);
    }

    return vecString;
}

stClient ConvertLineToRecord(string line, string delim)
{
    stClient clint;
    vector<string> vecString;

    vecString = SplitLine(line, delim);

    clint.accountNumber = vecString[enClintDetails::accountNumber];
    clint.pinCode = vecString[enClintDetails::pinCode];
    clint.name = vecString[enClintDetails::name];
    clint.phone = vecString[enClintDetails::phone];
    clint.accountBalance = stod(vecString[enClintDetails::accountBalance]);

    return clint;
}

vector<stClient> ReadDataFromFile(string fileName, string delim)
{
    vector<stClient> clients;
    
    fstream file(fileName, ios::in);
    if (!file.is_open())
    {
        cout << "Failed to open the file!" << endl;
    }

    string line;
    stClient client;
    while (getline(file, line))
    {
        client = ConvertLineToRecord(line, delim);
        clients.push_back(client);
    }

    file.close();

    return clients;
}

void PrintData()
{
    vector<stClient> clients;
    clients = ReadDataFromFile("clients.txt", "#//#");

    cout << "\t\t\t\tClient List (" << clients.size() << ") Client(s)" << endl;
    cout << "__________________________________________________________________________________________" << endl;
    cout << "| Account Number  | Pin Code | Client Name                 | Phone             | Balance |" << endl;
    cout << "__________________________________________________________________________________________" << endl;
    for (short i = 0; i < clients.size(); i++)
    {
        cout << "| " << clients[i].accountNumber << setw(15) << " | " << clients[i].pinCode << setw(7) << " | " << clients[i].name << setw(22) << " | " << clients[i].phone << setw(10) << " | " << clients[i].accountBalance << setw(5) << "|" << endl;
    }
    cout << "__________________________________________________________________________________________" << endl;
}

int main()
{
    WelcomeMessage();
    PrintData();

    cout << endl
         << endl;

    return 0;
}
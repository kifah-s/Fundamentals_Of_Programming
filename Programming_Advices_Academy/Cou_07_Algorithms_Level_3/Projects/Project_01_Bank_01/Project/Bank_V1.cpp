#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const string fileName = "clients.txt";

//* Structs ..

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
};

//* End Structs ..

//* Enums ..

enum enMainMenuScreenOptions
{
    opShowClintList = 1,
    opAddNewClint = 2,
    opDeleteClint = 3,
    opUpdateClintInfo = 4,
    opFindClint = 5,
    opExit = 6
};

enum enClientInformation
{
    accountNumber = 0,
    pinCode = 1,
    name = 2,
    phone = 3,
    accountBalance = 4
};

//* End Enums ..

//* Functions ..
void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

short MainMenuScreen()
{
    short userChoice = 0;

    cout << "\n\n==================================================" << endl;
    cout << "\t\tMain Menu Screen" << endl;
    cout << "==================================================" << endl;
    cout << "[1]: Show Clint List." << endl;
    cout << "[2]: Add New Clint." << endl;
    cout << "[3]: Delete Clint." << endl;
    cout << "[4]: Update Clint Info." << endl;
    cout << "[5]: Find Clint." << endl;
    cout << "[6]: Exit." << endl;
    cout << "==================================================" << endl;
    cout << "Chose what do you want to do [1 / 6]: ";
    cin >> userChoice;

    return userChoice;
}

vector<string> SplitString(string s1, string delim)
{
    vector<string> vecString;
    short pos = 0;
    string sWord;

    while ((pos = s1.find(delim)) != std::string::npos)
    {
        sWord = s1.substr(0, pos);

        if (sWord != "")
        {
            vecString.push_back(sWord);
        }

        s1.erase(0, pos + delim.length());
    }

    if (s1 != "")
    {
        vecString.push_back(s1);
    }

    return vecString;
}

stClient ConvertLinetoRecord(string line, string separator = "#//#")
{
    stClient client;
    vector<string> vecClientData;

    vecClientData = SplitString(line, separator);

    client.accountNumber = vecClientData[enClientInformation::accountNumber];
    client.pinCode = vecClientData[enClientInformation::pinCode];
    client.name = vecClientData[enClientInformation::name];
    client.phone = vecClientData[enClientInformation::phone];
    client.accountBalance = stod(vecClientData[enClientInformation::accountBalance]);

    return client;
}

vector<stClient> LoadClientsDataFromFile(string fileName)
{
    vector<stClient> vecClients;

    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        stClient client;

        while (getline(myFile, line))
        {
            client = ConvertLinetoRecord(line);
            vecClients.push_back(client);
        }

        myFile.close();
    }

    return vecClients;
}

void PrintClientRecord(stClient client)
{
    cout << "| " << setw(15) << left << client.accountNumber;
    cout << "| " << setw(10) << left << client.pinCode;
    cout << "| " << setw(40) << left << client.name;
    cout << "| " << setw(12) << left << client.phone;
    cout << "| " << setw(12) << left << client.accountBalance;
}

void PrintAllClientsData(vector<stClient> vecClients)
{
    cout << "\n\n_______________________________________________________";
    cout << "_________________________________________" << endl;
    cout << "\n\t\t\t\tClient List (" << vecClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client name";
    cout << "| " << left << setw(12) << "phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    for (stClient client : vecClients)
    {
        PrintClientRecord(client);
        cout << endl;
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

void UserChoiceFromMainMenuScreen(short userChoice, vector<stClient> vecClients)
{
    switch (userChoice)
    {
    case enMainMenuScreenOptions::opShowClintList:
        vecClients = LoadClientsDataFromFile(fileName);
        PrintAllClientsData(vecClients);
        cout << "\nPress any key to go back to Main Menu... ";
        system("pause > nul");
        break;

    case enMainMenuScreenOptions::opAddNewClint:
        /* code */
        break;

    case enMainMenuScreenOptions::opDeleteClint:
        /* code */
        break;

    case enMainMenuScreenOptions::opUpdateClintInfo:
        /* code */
        break;

    case enMainMenuScreenOptions::opFindClint:
        /* code */
        break;

    case enMainMenuScreenOptions::opExit:
        /* code */
        break;

    default:
        break;
    }
}

void Bank()
{
    short userChoice = 0;
    vector<stClient> vecClients;

    do
    {
        userChoice = MainMenuScreen();
        UserChoiceFromMainMenuScreen(userChoice, vecClients);
    } while (userChoice != 6);


}

//* End Functions ..

int main()
{
    WelcomeMessage();

    Bank();

    cout << endl
         << endl;

    return 0;
}
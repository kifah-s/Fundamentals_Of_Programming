#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const string clientsFileName = "clients.txt";
const string usersFileName = "users.txt";

void ShowMainMenu();
void ShowTransactionsScreen();
void Logout();

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
    bool markForDelete = false;
};

struct stUserAccount
{
    string userName;
    string password;
};

enum enMainMenuOptions
{
    opShowClintList = 1,
    opAddNewClint = 2,
    opDeleteClint = 3,
    opUpdateClintInfo = 4,
    opFindClint = 5,
    opTransactions = 6,
    // opExit = 7
    opManageUsers = 7,
    opLogout = 8

};

enum enTransactionsMenuOptions
{
    opDeposit = 1,
    opWithdraw = 2,
    opTotalBalance = 3,
    opMainMenu = 4
};

enum enClientInformation
{
    accountNumber = 0,
    pinCode = 1,
    name = 2,
    phone = 3,
    accountBalance = 4
};

enum enUserInformation
{
    userName = 0,
    password = 1
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

short ReadMainMenuOption()
{
    short userChoice = 0;

    cout << "Chose what do you want to do [1 / 8]: ";
    cin >> userChoice;

    return userChoice;
}

void GoBackToMainMenu()
{
    cout << "\nPress Any Key To Go Back Main Menu ...";
    system("pause > nul");

    ShowMainMenu();
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

stClient ConvertLineToRecordForClientsFile(string line, string separator = "#//#")
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

vector<stClient> LoadClientsDataFromFile(string clientsFileName)
{
    vector<stClient> vecClients;

    fstream myFile;
    myFile.open(clientsFileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        stClient client;

        while (getline(myFile, line))
        {
            client = ConvertLineToRecordForClientsFile(line);
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

void ShowAllClientScreen()
{
    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);

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

    if (vecClients.size() == 0)
    {
        cout << "No Clients Available In The System." << endl;
    }
    else
    {
        for (stClient client : vecClients)
        {
            PrintClientRecord(client);
            cout << endl;
        }
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

bool ClientExistsByAccountNumber(string accountNumber, string clientsFileName)
{
    vector<stClient> vecClients;

    fstream myFile;
    myFile.open(clientsFileName, ios::in); // read Mode

    if (myFile.is_open())
    {
        string line;
        stClient client;

        while (getline(myFile, line))
        {
            client = ConvertLineToRecordForClientsFile(line);

            if (client.accountNumber == accountNumber)
            {
                myFile.close();
                return true;
            }

            vecClients.push_back(client);
        }

        myFile.close();
    }

    return false;
}

stClient ReadNewClient()
{
    stClient client;

    cout << "Enter Account Number: ";
    // Usage of std::ws will extract all the whitespace character.
    getline(cin >> ws, client.accountNumber);

    while (ClientExistsByAccountNumber(client.accountNumber, clientsFileName))
    {
        cout << "Client with Account Number [" << client.accountNumber << "] Already Exists .. Please, Enter Another Account Number: ";
        // Usage of std::ws will extract all the whitespace character.
        getline(cin >> ws, client.accountNumber);
    }

    cout << "Enter PinCode: ";
    getline(cin, client.pinCode);

    cout << "Enter Name: ";
    getline(cin, client.name);

    cout << "Enter Phone: ";
    getline(cin, client.phone);

    cout << "Enter Account Balance: ";
    cin >> client.accountBalance;

    return client;
}

string ConvertRecordToLine(stClient client, string separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += client.accountNumber + separator;
    stClientRecord += client.pinCode + separator;
    stClientRecord += client.name + separator;
    stClientRecord += client.phone + separator;
    stClientRecord += to_string(client.accountBalance);

    return stClientRecord;
}

void AddDataLineToFile(string clientsFileName, string strDataLine)
{
    fstream myFile;

    myFile.open(clientsFileName, ios::out | ios::app);

    if (myFile.is_open())
    {
        myFile << strDataLine << endl;

        myFile.close();
    }
}

void AddNewClient()
{
    stClient client;

    client = ReadNewClient();

    AddDataLineToFile(clientsFileName, ConvertRecordToLine(client));
}

void AddNewClients()
{
    char addMore = 'Y';

    do
    {
        // system("cls");
        AddNewClient();
        cout << "\nClient Added Successfully, do you want to add more clients? (Y / N): ";
        cin >> addMore;
    } while (toupper(addMore) == 'Y');
}

void ShowAddNewClientsScreen()
{
    cout << "--------------------------------------------" << endl;
    cout << "\tAdd New Clint Screen" << endl;
    cout << "--------------------------------------------" << endl;

    AddNewClients();
}

void PrintClientCard(stClient client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number: " << client.accountNumber;
    cout << "\nPin Code     : " << client.pinCode;
    cout << "\nName         : " << client.name;
    cout << "\nPhone        : " << client.phone;
    cout << "\nAccount Balance: " << client.accountBalance;
}

bool FindClientByAccountNumber(string accountNumber, vector<stClient> vecClients, stClient &client)
{
    for (stClient &c : vecClients)
    {
        if (c.accountNumber == accountNumber)
        {
            client = c;
            return true;
        }
    }

    return false;
}

bool MarkClientForDeleteByAccountNumber(string accountNumber, vector<stClient> &vecClients)
{
    for (stClient &c : vecClients)
    {
        if (c.accountNumber == accountNumber)
        {
            c.markForDelete = true;
            return true;
        }
    }

    return false;
}

vector<stClient> SaveClientsDataToFile(string clientsFileName, vector<stClient> vecClients)
{
    fstream myFile;
    myFile.open(clientsFileName, ios::out);

    string DataLine = "";

    if (myFile.is_open())
    {
        for (stClient &c : vecClients)
        {
            if (c.markForDelete == false)
            {
                DataLine = ConvertRecordToLine(c);
                myFile << DataLine << endl;
            }
        }

        myFile.close();
    }

    return vecClients;
}

void DeleteClientByAccountNumber(string accountNumber, vector<stClient> &vecClients)
{
    stClient client;
    char answer = 'n';

    if (FindClientByAccountNumber(accountNumber, vecClients, client))
    {
        PrintClientCard(client);
        cout << "\n\nAre you sure you want delete this client? (y / n): ";
        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(accountNumber, vecClients);
            SaveClientsDataToFile(clientsFileName, vecClients);
            vecClients = LoadClientsDataFromFile(clientsFileName);
            cout << "\nClient Deleted Successfully.";

            // return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";

        // return false;
    }
}

string ReadClientAccountNumber()
{
    string accountNumber = "";

    cout << "Please enter Account Number: ";
    cin >> accountNumber;

    return accountNumber;
}

void ShowDeleteClientScreen()
{
    cout << "--------------------------------------------" << endl;
    cout << "\tDelete Clint Screen" << endl;
    cout << "--------------------------------------------" << endl;

    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    string accountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(accountNumber, vecClients);
}

stClient ChangeClientRecord(string accountNumber)
{
    stClient client;

    client.accountNumber = accountNumber;

    cout << "\nEnter Pin Code: ";
    getline(cin >> ws, client.pinCode);

    cout << "Enter Name: ";
    getline(cin, client.name);

    cout << "Enter Phone: ";
    getline(cin, client.phone);

    cout << "Enter Account Balance: ";
    cin >> client.accountBalance;

    return client;
}

void UpdateClientByAccountNumber(string accountNumber, vector<stClient> &vecClients)
{
    stClient client;
    char answer = 'n';

    if (FindClientByAccountNumber(accountNumber, vecClients, client))
    {
        PrintClientCard(client);

        cout << "\n\nAre you sure you want update this client? (y / n): ";
        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            for (stClient &c : vecClients)
            {
                if (c.accountNumber == accountNumber)
                {
                    c = ChangeClientRecord(accountNumber);
                    break;
                }
            }

            SaveClientsDataToFile(clientsFileName, vecClients);
            cout << "\n\nClient Updated Successfully.";

            // return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";

        // return false;
    }
}

void ShowUpdateClientScreen()
{
    cout << "--------------------------------------------" << endl;
    cout << "\tUpdate Clint Screen" << endl;
    cout << "--------------------------------------------" << endl;

    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    string accountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(accountNumber, vecClients);
}

void ShowFindClientScreen()
{
    cout << "--------------------------------------------" << endl;
    cout << "\tFind Clint Screen" << endl;
    cout << "--------------------------------------------" << endl;

    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    string accountNumber = ReadClientAccountNumber();
    stClient client;

    if (FindClientByAccountNumber(accountNumber, vecClients, client))
    {
        PrintClientCard(client);
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!" << endl;
    }
}

void ShowExitScreen()
{
    cout << "\n\n==================================================" << endl;
    cout << "\t\tProgram Ends." << endl;
    cout << "==================================================" << endl;
}

short ReadTransactionsMenuOption()
{
    short userChoice = 0;

    cout << "Chose what do you want to do [1 / 4]: ";
    cin >> userChoice;

    return userChoice;
}

void TransactionsMenuScreen()
{
    cout << "\n\n========================================" << endl;
    cout << "\tTransactions Menu Screen" << endl;
    cout << "========================================" << endl;
    cout << "[1]: Deposit." << endl;
    cout << "[2]: Withdraw." << endl;
    cout << "[3]: Total Balance." << endl;
    cout << "[4]: Main Menu." << endl;
    cout << "========================================" << endl;
}

void GoBackToTransactionsMenu()
{
    cout << "\nPress Any Key To Go Back Transactions Menu ...";
    system("pause > nul");

    ShowTransactionsScreen();
}

double ReadDepositAmount()
{
    double depositAmount = 0;
    cout << "\n\nPlease, enter deposit amount: ";
    cin >> depositAmount;

    return depositAmount;
}

char ConfirmExecutionThisTransaction()
{
    char answer = 'y';
    cout << "\nAre you sure you want perform this transaction (y / n): ";
    cin >> answer;

    return answer;
}

void DepositBalanceToClientByAccountNumber(string accountNumber, double depositAmount, vector<stClient> &vecClients)
{
    if (tolower(ConfirmExecutionThisTransaction()) == 'y')
    {
        for (stClient &c : vecClients)
        {
            if (c.accountNumber == accountNumber)
            {
                c.accountBalance += depositAmount;
                cout << "\nDone Successfully.. New Balance: " << c.accountBalance << endl;
                break;
            }
        }

        SaveClientsDataToFile(clientsFileName, vecClients);
    }
}

void AddDepositToClientAccount()
{
    string accountNumber = ReadClientAccountNumber();
    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    stClient client;

    while (!FindClientByAccountNumber(accountNumber, vecClients, client))
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!" << endl;
        accountNumber = ReadClientAccountNumber();
    }
    PrintClientCard(client);

    double depositAmount = ReadDepositAmount();

    DepositBalanceToClientByAccountNumber(accountNumber, depositAmount, vecClients);
}

void ShowDepositScreen()
{
    cout << "\n----------------------------------------" << endl;
    cout << "\tDeposit Screen" << endl;
    cout << "----------------------------------------" << endl;

    AddDepositToClientAccount();
}

double ReadWithdrawAmount(string accountNumber, vector<stClient> vecClients, stClient client)
{
    double withdrawAmount = 0;
    cout << "\nPlease, Enter Withdraw Amount: ";
    cin >> withdrawAmount;

    while (withdrawAmount > client.accountBalance)
    {
        cout << "\nAmount Excited The Balance, You Can Withdraw Up To: " << client.accountBalance << endl;
        withdrawAmount = ReadWithdrawAmount(accountNumber, vecClients, client);
    }

    return withdrawAmount;
}

void WithdrawFromClientAccount()
{
    string accountNumber = ReadClientAccountNumber();
    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    stClient client;

    while (!FindClientByAccountNumber(accountNumber, vecClients, client))
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!" << endl;
        accountNumber = ReadClientAccountNumber();
    }
    PrintClientCard(client);

    double withdrawAmount = ReadWithdrawAmount(accountNumber, vecClients, client);

    DepositBalanceToClientByAccountNumber(accountNumber, withdrawAmount * -1, vecClients);
}

void ShowWithdrawScreen()
{
    cout << "\n----------------------------------------" << endl;
    cout << "\tWithdraw Screen" << endl;
    cout << "----------------------------------------" << endl;

    WithdrawFromClientAccount();
}

void PrintClientRecordForTotalBalancesScreen(stClient client)
{
    cout << "| " << setw(15) << left << client.accountNumber;
    cout << "| " << setw(40) << left << client.name;
    cout << "| " << setw(12) << left << client.accountBalance;
}

void ShowAllClientForTotalBalancesScreen()
{
    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);
    double totalBalances = 0;

    cout << "\n\n_______________________________________________________";
    cout << "_________________________________________" << endl;
    cout << "\n\t\t\t\tBalances List (" << vecClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(40) << "Client name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    if (vecClients.size() == 0)
    {
        cout << "No Clients Available In The System." << endl;
    }
    else
    {
        for (stClient client : vecClients)
        {
            PrintClientRecordForTotalBalancesScreen(client);
            totalBalances += client.accountBalance;
            cout << endl;
        }
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
    cout << "\t\t\t\tTotal Balances: " << totalBalances << endl;
    cout << "_______________________________________________________";
    cout << "_________________________________________" << endl;
}

void ShowTotalBalancesScreen()
{
    ShowAllClientForTotalBalancesScreen();
}

void PerformTransactionsMenuOption(enTransactionsMenuOptions transactionsMenuOptions)
{
    switch (transactionsMenuOptions)
    {
    case enTransactionsMenuOptions::opDeposit:
        ShowDepositScreen();
        GoBackToTransactionsMenu();
        break;

    case enTransactionsMenuOptions::opWithdraw:
        ShowWithdrawScreen();
        GoBackToTransactionsMenu();
        break;

    case enTransactionsMenuOptions::opTotalBalance:
        ShowTotalBalancesScreen();
        GoBackToTransactionsMenu();
        break;

    case enTransactionsMenuOptions::opMainMenu:
        ShowMainMenu();
        break;
    }
}

void ShowTransactionsScreen()
{
    TransactionsMenuScreen();
    PerformTransactionsMenuOption((enTransactionsMenuOptions)ReadTransactionsMenuOption());
}

void PerformMainMenuOption(enMainMenuOptions mainMenuOptions)
{
    switch (mainMenuOptions)
    {
    case enMainMenuOptions::opShowClintList:
        ShowAllClientScreen();
        GoBackToMainMenu();
        break;

    case enMainMenuOptions::opAddNewClint:
        ShowAddNewClientsScreen();
        GoBackToMainMenu();
        break;

    case enMainMenuOptions::opDeleteClint:
        ShowDeleteClientScreen();
        GoBackToMainMenu();
        break;

    case enMainMenuOptions::opUpdateClintInfo:
        ShowUpdateClientScreen();
        GoBackToMainMenu();
        break;

    case enMainMenuOptions::opFindClint:
        ShowFindClientScreen();
        GoBackToMainMenu();
        break;

    case enMainMenuOptions::opTransactions:
        ShowTransactionsScreen();
        break;

        // case enMainMenuOptions::opExit:
        //     ShowExitScreen();
        //     break;

    case enMainMenuOptions::opManageUsers:

        break;

    case enMainMenuOptions::opLogout:
        Logout();
        break;
    }
}

void ShowMainMenu()
{
    cout << "\n\n==================================================" << endl;
    cout << "\t\tMain Menu Screen" << endl;
    cout << "==================================================" << endl;
    cout << "[1]: Show Clint List." << endl;
    cout << "[2]: Add New Clint." << endl;
    cout << "[3]: Delete Clint." << endl;
    cout << "[4]: Update Clint Info." << endl;
    cout << "[5]: Find Clint." << endl;
    cout << "[6]: Transactions." << endl;
    cout << "[7]: Manage Users." << endl;
    cout << "[8]: Logout." << endl;
    cout << "==================================================" << endl;

    PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOption());
}

//* __________________________________ Login __________________________________ *//

void LoginScreen()
{
    cout << "\n----------------------------------------" << endl;
    cout << "\tLogin Screen" << endl;
    cout << "----------------------------------------" << endl;
}

stUserAccount ReadUserNameAndPassword()
{
    stUserAccount user;

    cout << "Please, enter user name: ";
    getline(cin >> ws, user.userName);

    cout << "Please, enter password: ";
    cin >> user.password;

    return user;
}

stUserAccount ConvertLineToRecordForUsersFile(string line, string separator = "#//#")
{
    stUserAccount user;
    vector<string> vecUserData;

    vecUserData = SplitString(line, separator);

    user.userName = vecUserData[enUserInformation::userName];
    user.password = vecUserData[enUserInformation::password];

    return user;
}

vector<stUserAccount> LoadUsersDataFromFile(string UsersFileName)
{
    vector<stUserAccount> vecUsers;

    fstream myFile;
    myFile.open(usersFileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        stUserAccount user;

        while (getline(myFile, line))
        {
            user = ConvertLineToRecordForUsersFile(line);
            vecUsers.push_back(user);
        }

        myFile.close();
    }

    return vecUsers;
}

bool FindUserByUserName(string userName, string password, vector<stUserAccount> vecUsers)
{
    for (stUserAccount &user : vecUsers)
    {
        if (user.userName == userName && user.password == password)
        {
            return true;
        }
    }

    return false;
}

void ShowLoginScreen()
{
    LoginScreen();

    stUserAccount user = ReadUserNameAndPassword();
    vector<stUserAccount> vecUsers = LoadUsersDataFromFile("users");

    while (!FindUserByUserName(user.userName, user.password, vecUsers))
    {
        cout << "\nInvalid UserName / Password.\n\n";
        user = ReadUserNameAndPassword();
    }

    ShowMainMenu();
}

void Logout()
{
    ShowLoginScreen();
}

int main()
{
    WelcomeMessage();

    ShowLoginScreen();

    cout << endl
         << endl;

    return 0;
}
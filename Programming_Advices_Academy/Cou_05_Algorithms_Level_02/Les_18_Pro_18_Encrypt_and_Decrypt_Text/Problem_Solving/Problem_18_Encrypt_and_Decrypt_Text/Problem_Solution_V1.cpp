#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string ReadName()
{
    string name = "";
    cout << "Please, enter your name: ";
    cin >> name;

    return name;
}

void PrintName(string massage, string name)
{
    cout << massage << name << endl;
}

string EncryptionName(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = name[i] + 2;
    }
    
    return name;
}

string DecryptionName(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = name[i] - 2;
    }
    
    return name;
}

int main()
{
    WelcomeMessage();

    string name = ReadName();
    PrintName("\nText Befor Encryption: ", name);
    name = EncryptionName(name);
    PrintName("Text After Encryption: ", name);
    name = DecryptionName(name);
    PrintName("Text After Decryption: ", name);

    cout << endl
         << endl;

    return 0;
}
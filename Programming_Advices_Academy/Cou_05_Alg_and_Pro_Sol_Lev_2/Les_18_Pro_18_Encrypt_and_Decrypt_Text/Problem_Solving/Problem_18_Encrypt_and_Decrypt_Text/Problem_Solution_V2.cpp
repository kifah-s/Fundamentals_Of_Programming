#include <iostream>
#include <string>

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
    getline(cin, name);

    return name;
}

void PrintName(string massage, string name)
{
    cout << massage << name << endl;
}

string EncryptionName(string name, int key)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = name[i] + key;
    }

    return name;
}

string DecryptionName(string name, int key)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = name[i] - key;
    }

    return name;
}

void PrintResult(string name)
{
    PrintName("\nText Befor Encryption: ", name);
    name = EncryptionName(name, 2);
    PrintName("Text After Encryption: ", name);
    name = DecryptionName(name, 2);
    PrintName("Text After Decryption: ", name);
}

int main()
{
    WelcomeMessage();

    PrintResult(ReadName());

    cout << endl
         << endl;

    return 0;
}
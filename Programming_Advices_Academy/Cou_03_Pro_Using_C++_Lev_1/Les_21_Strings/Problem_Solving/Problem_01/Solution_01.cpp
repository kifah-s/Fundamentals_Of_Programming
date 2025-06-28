#include <iostream>
#include <string>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    string str1, str2, str3;

    cout << "Please, enter full anme: ";
    getline(cin, str1);

    cout << "Please, enter str 2: ";
    cin >> str2;

    cout << "Please, enter str 3: ";
    cin >> str3;

    cout << "\nFull Name: " << str1 << endl;
    cout << "Length of str 1: " << str1.length() << endl;
    cout << "Character of 0, 2 , 4, 6 , 8 , 10: " << str1[0] << ", " << str1[2] << ", " << str1[4] << ", " << str1[6] << ", " << str1[8] << ", " << str1[10] << ", " << endl;
    cout << "Concatenating str 2 and str 3: " << str2 + str3 << endl;

    int result = stoi(str2) * stoi(str3);
    cout << str2 << " * " << str3 << ": " << result << endl;

    cout << endl
         << endl;

    return 0;
}
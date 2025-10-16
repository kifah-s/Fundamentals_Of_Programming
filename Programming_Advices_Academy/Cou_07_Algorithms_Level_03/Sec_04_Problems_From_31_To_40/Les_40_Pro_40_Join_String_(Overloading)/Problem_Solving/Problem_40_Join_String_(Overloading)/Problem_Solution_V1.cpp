#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string JoinString(vector<string> myVector, string delim)
{
    string myString = "";

    for (string &word : myVector)
    {
        myString = myString + word + delim;
    }

    return myString.substr(0, myString.length() - delim.length());
}

string JoinString(string myArr[], short length, string delim)
{
    string myString = "";

    for (short i = 0; i < length; i++)
    {
        myString += myArr[i] + delim;
    }
    

    return myString.substr(0, myString.length() - delim.length());
}

int main()
{
    WelcomeMessage();

    vector<string> myVector = {"kifah", "houda", "madal", "saloum"};
    string myArray[4] = {"kifah", "houda", "madal", "saloum"};

    cout << "Vector After Join: " << endl;
    cout << JoinString(myVector, ", ");

    cout << "\n\nArray After Join: " << endl;
    cout << JoinString(myArray, 4, ", ");

    cout << endl
         << endl;

    return 0;
}
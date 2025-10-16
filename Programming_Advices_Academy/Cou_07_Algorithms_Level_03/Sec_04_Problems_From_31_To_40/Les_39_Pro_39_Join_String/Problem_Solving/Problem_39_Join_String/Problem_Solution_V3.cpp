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

int main()
{
    WelcomeMessage();

    vector<string> myVector = {"kifah", "houda", "madal", "saloum"};

    cout << "Vector After Join: " << endl;
    cout << JoinString(myVector, ", ");

    cout << endl
         << endl;

    return 0;
}
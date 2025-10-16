#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string JoinString(vector<string> myVector, string myString)
{
    for (string &word : myVector)
    {
        myString = myString + word + ' ';
    }

    return myString;
}

int main()
{
    WelcomeMessage();

    vector<string> myVector = {"kifah", "houda", "madal", "saloum"};
    string myString = "";

    myString = JoinString(myVector, myString);

    cout << "Vector After Join: " << endl;
    cout << myString << endl;

    cout << endl
         << endl;

    return 0;
}
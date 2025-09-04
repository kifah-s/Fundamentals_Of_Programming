#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string ReadString()
{
    string str = "";
    cout << "Please, enter your string: ";
    getline(cin, str);

    return str;
}

short CountCapitalLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            Counter++;
        }
    }

    return Counter;
}

short CountSmallLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
        {
            Counter++;
        }
    }

    return Counter;
}

enum enWhatToCount
{
    SmallLetters = 0,
    CapitalLetters = 1,
    All = 3
};

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S1.length();
    }

    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
        {
            Counter++;
        }
        if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
        {
            Counter++;
        }
    }

    return Counter;
}

int main()
{
    WelcomeMessage();

    string S1 = ReadString();

    cout << "\nString Length = " << S1.length();
    cout << "\nCapital Letters Count= " << CountCapitalLetters(S1);
    cout << "\nSmall Letters Count= " << CountSmallLetters(S1);

    cout << "\n\nMethod 2:";
    cout << "\nString Length = " << CountLetters(S1);
    cout << "\nCapital Letters Count= " << CountLetters(S1, enWhatToCount::CapitalLetters);
    cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters);

    cout << endl
         << endl;

    return 0;
}
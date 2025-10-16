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
    string S1;
    cout << "\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

char ReadChar()
{
    char Ch1;
    cout << "\nPlease Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}

char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter)
            {
                Counter++;
            }
        }
        else
        {
            if (tolower(S1[i]) == tolower(Letter))
            {
                Counter++;
            }
        }
    }
    
    return Counter;
}

int main()
{
    WelcomeMessage();

    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1);
    cout << "\nLetter \'" << Ch1 << "\' ";
    cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
    cout << " Count = " << CountLetter(S1, Ch1, false);

    cout << endl
         << endl;

    return 0;
}
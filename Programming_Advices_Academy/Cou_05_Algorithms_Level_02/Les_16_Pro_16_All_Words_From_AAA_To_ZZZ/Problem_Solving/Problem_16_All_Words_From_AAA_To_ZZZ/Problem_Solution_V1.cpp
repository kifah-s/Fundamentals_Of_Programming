#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void PrintAllWordsFromAAAToZZZ()
{
    string word = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                // word.append(1, char(i));
                // word.append(1, char(j));
                // word.append(1, char(k));
                
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << word << endl;

                word = "";
            }
        }
        cout << "\n____________________________\n";
    }
}

int main()
{
    WelcomeMessage();
    PrintAllWordsFromAAAToZZZ();
    cout << endl
         << endl;

    return 0;
}
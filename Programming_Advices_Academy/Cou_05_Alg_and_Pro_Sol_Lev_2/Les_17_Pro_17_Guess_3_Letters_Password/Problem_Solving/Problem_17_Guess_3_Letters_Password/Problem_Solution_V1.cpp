#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string ReadPassword()
{
    string pass = "";

    cout << "Please, enter a 3-Letter Password (all capital): ";
    cin >> pass;

    return pass;
}

void CheckPassword(string pass)
{
    string word = "";
    int counter = 1;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                // word = word + char(i);
                // word = word + char(j);
                // word = word + char(k);

                word.append(1, char(i));
                word.append(1, char(j));
                word.append(1, char(k));

                cout << "Trial[" << counter << "]: " << word << endl;

                if (word == pass)
                {
                    cout << "\nPassword is " << word << endl;
                    cout << "Found After " << counter << " Trial(s)." << endl;
                    return;
                }

                word = "";
                counter++;
            }
        }
    }
}

int main()
{
    WelcomeMessage();
    CheckPassword(ReadPassword());

    cout << endl
         << endl;

    return 0;
}
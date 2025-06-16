#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printLettersFun()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << "Letter: " << (char)i << endl;
        
        for (int j = 65; j <= 90; j++)
        {
            cout << (char)i << (char)j << endl;
        }

        cout << "***************************" << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printLettersFun();

    cout << endl
         << endl;

    return 0;
}
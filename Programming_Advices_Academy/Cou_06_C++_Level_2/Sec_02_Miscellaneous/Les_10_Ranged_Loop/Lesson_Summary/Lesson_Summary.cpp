#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    int myArray[5] = {1, 2, 3, 4, 5};

    // for (int i : myArray)
    // {
    //     cout << i << " ";
    // }

    // for (auto &&i : myArray)
    // {
    //     cout << i << " ";
    // }

    // for (int i : {1, 2, 3, 4, 5, 6, 7, 8, 9})
    // {
    //     cout << i << " ";
    // }

    

    cout << endl
         << endl;

    return 0;
}
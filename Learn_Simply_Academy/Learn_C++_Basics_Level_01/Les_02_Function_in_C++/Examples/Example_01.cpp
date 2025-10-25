#include <iostream>
// #include <stdlib.h>
// #include <time.h>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    //* Random Numbers *//

    // cout << rand() << endl;

    //* -------------------------------------------------

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << rand() << endl;
    // }

    //* -------------------------------------------------

    // srand(time(0));
    // cout << rand() << endl;

    //* -------------------------------------------------

    // srand(time(0));

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << rand() << endl;
    // }

    //* -------------------------------------------------

    // srand(time(0));

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << rand() % 11 << endl;
    // }

    //* -------------------------------------------------

    //! start + rand() % (end - start + 1)

    // srand(time(0));

    // cout << 10 + rand() % (20 - 10 + 1) << endl;

    //* -------------------------------------------------

    //! start + rand() % (end - start + 1)

    // srand(time(0));

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << 10 + rand() % (20 - 10 + 1) << endl;
    // }

    //* -------------------------------------------------

    cout << endl
         << endl;

    return 0;
}
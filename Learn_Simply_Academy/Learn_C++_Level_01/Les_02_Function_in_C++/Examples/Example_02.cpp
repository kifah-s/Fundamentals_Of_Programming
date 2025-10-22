#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* Recursion *//

// int recFun(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 1 + recFun(n - 1);
//     }
// }

// int recFun2(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 7 + recFun2(n - 2);
//     }
// }

int recFun3(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * recFun3(n - 1);
    }
}

int main()
{
    WelcomeMessage();

    //* Recursion *//

    // int n = 3;
    // cout << recFun(n) << endl;

    //* -----------------------------------------
    
    // cout << recFun2(4) << endl;
    
    //* -----------------------------------------
    
    cout << recFun3(4) << endl;
    
    //* -----------------------------------------

    

    cout << endl
         << endl;

    return 0;
}
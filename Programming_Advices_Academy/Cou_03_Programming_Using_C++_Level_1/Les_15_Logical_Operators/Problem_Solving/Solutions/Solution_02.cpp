#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    cout << "(5 > 6 and 7 = 7) or (1 or 0): " << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << "not(5 > 6 and 7 = 7) or (1 or 0): " << !((5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << "not(5 > 6 and 7 = 7) or not(1 or 0): " << !((5 > 6 && 7 == 7) || !(1 || 0)) << endl;
    cout << "not(5 > 6 or 7 = 7) or not(1 or 0): " << !((5 > 6 || 7 == 7) && !(1 || 0)) << endl;
    cout << "((5 > 6 and 7 <= 8) or (8 > 1 and 4 <= 3)) and true: " << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true) << endl;
    cout << "((5 > 6 and not(7 <= 8)) and (8 > 1 or 4 <= 3)) or true: " << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true) << endl;

    cout << endl
         << endl;

    return 0;
}
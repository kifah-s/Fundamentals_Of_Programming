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

    cout << "(12 >= 12): " << (12 >= 12) << endl;
    cout << "!(12 >= 12): " << !(12 >= 12) << endl;
    cout << "(12 > 7): " << (12 > 7) << endl;
    cout << "!(12 > 7): " << !(12 > 7) << endl;
    cout << "(8 < 6): " << (8 < 6) << endl;
    cout << "!(8 < 6): " << !(8 < 6) << endl;
    cout << "(8 = 8): " << (8 == 8) << endl;
    cout << "!(8 = 8): " << !(8 == 8) << endl;
    cout << "(12 <= 12): " << (12 <= 12) << endl;
    cout << "!(12 <= 12): " << !(12 <= 12) << endl;
    cout << "(7 = 5): " << (7 == 5) << endl;
    cout << "!(7 = 5): " << !(7 == 5) << endl;
    cout << "-------------------------------" << endl;
    cout << "(1 and 1): " << (1 && 1) << endl;
    cout << "(true and 0): " << (true && 0) << endl;
    cout << "(0 or 1): " << (0 || 1) << endl;
    cout << "(0 or 0): " << (0 || 0) << endl;
    cout << "!(0): " << !(0) << endl;
    cout << "!(1 || 0): " << !(1 || 0) << endl;
    cout << "!(1 || 0): " << !(1 || 0) << endl;
    cout << "-------------------------------" << endl;
    cout << "(7 = 7) and (7 > 5): " << ((7 == 7) && (7 > 5)) << endl;
    cout << "(7 = 7) and (7 < 5): " << ((7 == 7) && (7 < 5)) << endl;
    cout << "(7 = 7) or (7 < 5): " << ((7 == 7) || (7 < 5)) << endl;
    cout << "(7 < 7) or (7 > 5): " << ((7 == 7) || (7 > 5)) << endl;
    cout << "!(7 = 7) and (7 > 5): " << !((7 == 7) && (7 > 5)) << endl;
    cout << "(7 = 7) and !(7 < 5): " << ((7 == 7) && !(7 < 5)) << endl;

    cout << endl
         << endl;

    return 0;
}
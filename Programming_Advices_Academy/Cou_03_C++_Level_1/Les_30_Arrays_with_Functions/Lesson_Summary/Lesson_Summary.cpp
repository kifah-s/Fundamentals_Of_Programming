#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void readArrayDate(int myArr[3])
{
    cout << "Please, enter num 1: ";
    cin >> myArr[0];

    cout << "Please, enter num 2: ";
    cin >> myArr[1];

    cout << "Please, enter num 3: ";
    cin >> myArr[2];
}

void printArrayDate(int myArr[3])
{
    cout << "\n***********************************" << endl;
    cout << "num 1: " << myArr[0] << endl;
    cout << "num 2: " << myArr[1] << endl;
    cout << "num 3: " << myArr[2] << endl;
    cout << "\n***********************************" << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int myArray[3];

    readArrayDate(myArray);
    printArrayDate(myArray);

    cout << endl
         << endl;

    return 0;
}
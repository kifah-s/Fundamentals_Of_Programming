
//* Class Computer Program (Version 1).

/*
* Create a class named Computer with attributes brand and RAMSize.
* Include a method to check if the computer meets minimum RAM requirements (8GB).

! Output:
! The computer meets minimum ram requirements.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Computer
{
private:
    string brand;
    int RAMSize;

public:
    // Setter.
    void setBrand(string b)
    {
        brand = b;
    }

    void setRAMSize(int r)
    {
        RAMSize = r;
    }

    // Getter.
    string getBrand()
    {
        return brand;
    }

    int getRAMSize()
    {
        return RAMSize;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Computer Program (Version 1) ..\n"
         << endl;
}

// Computer - Function.
void computerFun()
{
    int minimumRAM = 8;

    Computer computer_1;
    computer_1.setBrand("Dell");
    computer_1.setRAMSize(16);

    cout << "Computer Brand: " << computer_1.getBrand() << endl;
    if (computer_1.getRAMSize() >= minimumRAM)
    {
        cout << "The computer meets minimum ram requirements." << endl;
    }
    else
    {
        cout << "The computer meets not minimum ram requirements." << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    computerFun();

    cout << "\n"
         << endl;
}
//* End Function ..

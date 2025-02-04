
//* Class Apple Program (Version 1).

/*
* Create a program demonstrating inheritance.
* Define a base class Fruit with attributes name and color,
* and a method displayInfo to display the fruit's information.
* Derive a class Apple from Fruit with an additional attribute taste,
* and a method displayTaste to display the taste of the apple.
* Get details from the user for both the fruit and the apple.

! Input:
! Please, enter the fruit details:
! Please, enter fruit name: apple
! Please, enter fruit color: red

! Please, enter the apple details:
! Please, enter fruit taste: sweet

! Output:
! fruit name: apple, fruit color: red
! fruit taste: sweet
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
class Fruit
{
private:
    string name, color;

public:
    // Setter.
    void setName()
    {
        cout << "Please, enter the fruit details:" << endl;
        cout << "Please, enter fruit name: ";
        cin >> name;
    }

    void setColor()
    {
        cout << "Please, enter fruit color: ";
        cin >> color;
    }

    // Getter.
    void displayInfo()
    {
        cout << "\nfruit name: " << name << ", fruit color: " << color << endl;
    }
};

class Apple : public Fruit
{
private:
    string taste;

public:
    // Setter.
    void setTaste()
    {
        cout << "\nPlease, enter the apple details: " << endl;
        cout << "Please, enter fruit taste: ";
        cin >> taste;
    }

    // Getter.
    void displayTaste()
    {
        cout << "fruit taste: " << taste << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Apple Program (Version 1) ..\n"
         << endl;
}

// Apple - Function.
void appleFun()
{
    Apple myApple;

    myApple.setName();
    myApple.setColor();
    myApple.setTaste();
    myApple.displayInfo();
    myApple.displayTaste();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    appleFun();

    cout << "\n"
         << endl;
}
//* End Function ..

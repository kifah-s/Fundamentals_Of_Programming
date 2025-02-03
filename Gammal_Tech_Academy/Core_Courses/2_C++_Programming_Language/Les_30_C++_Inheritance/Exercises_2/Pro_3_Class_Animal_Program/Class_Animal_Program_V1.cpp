
//* Class Animal Program (Version 1).

/*
* Create a base class Animal with a method eat to display "Animal is eating",
* Derive a class Dog from Animal with a method bark to display "Dog is barking".

! Output:
! Drawing a shape.
! Drawing a circle.
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
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Animal Program (Version 1) ..\n"
         << endl;
}

// Animal - Function.
void animalFun()
{
    Dog myAnimal;
    myAnimal.eat();
    myAnimal.bark();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    animalFun();

    cout << "\n"
         << endl;
}
//* End Function ..

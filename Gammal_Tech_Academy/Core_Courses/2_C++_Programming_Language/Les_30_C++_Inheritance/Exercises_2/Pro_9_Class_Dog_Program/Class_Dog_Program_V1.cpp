
//* Class Dog Program (Version 1).

/*
* create a program demonstrating inheritance.
* Define a base class Animal with attributes name and sound,
* and a method animalDetails to display the animal's sound.
* Derive a class Dog from Animal with an additional attribute breed,
* and a method displayBreed to display the dog's breed.
* Get details from the user for both the animal and the dog.

! Input:
! Please, enter the animal details:
! Please, enter animal name: dog
! Please, enter animal sound: woof

! Please, enter the dog details:
! Please, enter dog breed: golden

! Output:
! animal name: dog, animal sound: woof
! dog bread: golden
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
private:
    string name, sound;

public:
    // Setter.
    void setName()
    {
        cout << "Please, enter the animal details:" << endl;
        cout << "Please, enter animal name: ";
        cin >> name;
    }

    void setSound()
    {
        cout << "Please, enter animal sound: ";
        cin >> sound;
    }

    // Getter.
    void animalDetails()
    {
        cout << "\nanimal name: " << name << ", animal sound: " << sound << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;

public:
    // Setter.
    void setBreed()
    {
        cout << "\nPlease, enter dog breed: ";
        cin >> breed;
    }

    // Getter.
    void displayBreed()
    {
        cout << "dog breed: " << breed << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Dog Program (Version 1) ..\n"
         << endl;
}

// Dog - Function.
void dogFun()
{
    Dog myAnimal;
    myAnimal.setName();
    myAnimal.setSound();
    myAnimal.setBreed();
    myAnimal.animalDetails();
    myAnimal.displayBreed();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    dogFun();

    cout << "\n"
         << endl;
}
//* End Function ..

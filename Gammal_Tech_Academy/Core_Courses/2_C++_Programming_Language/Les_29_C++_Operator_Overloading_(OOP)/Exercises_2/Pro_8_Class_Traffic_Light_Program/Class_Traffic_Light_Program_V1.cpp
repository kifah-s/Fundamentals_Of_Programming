
//* Class Traffic Light Program (Version 1).

/*
* Create a class named TrafficLight with an attribute currentColor representing the current color of the traffic light.
* Include a method to change the color to the next one in the sequence (red -> yellow -> green)

! Output:
! Traffic Light Change To: Yellow.
! Traffic Light Change To: Red.
! Traffic Light Change To: Green.
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
class TrafficLight
{
private:
    string currentColor;

public:
    // Change Color - Method.
    void changeColorMet()
    {
        currentColor = "Yellow";
        cout << "Traffic Light Change To: " << currentColor << endl;
        
        currentColor = "Red";
        cout << "Traffic Light Change To: " << currentColor << endl;
        
        currentColor = "Green";
        cout << "Traffic Light Change To: " << currentColor << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Traffic Light Program (Version 1) ..\n"
         << endl;
}

// Traffic Light - Function.
void trafficLightFun()
{
    TrafficLight t1;
    t1.changeColorMet();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    trafficLightFun();

    cout << "\n"
         << endl;
}
//* End Function ..

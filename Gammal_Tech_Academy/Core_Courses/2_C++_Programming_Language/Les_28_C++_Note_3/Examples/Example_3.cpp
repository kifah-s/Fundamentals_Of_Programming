

/* >>> Example 3 <<< */

#include <iostream>
#include <string>

using namespace std;

//* "Classes" are rules.
class member
{
public:
    string name;
    int days;
};

//* Sub Classes - Concept Inheritance.
class month : public member
{
public:
    int c, allCorses;
};

class year : public member
{
public:
    int c, allCorses, masterClass;
};

int main()
{
    //* Creat copy from the rule "Class student".
    year kifah;
    //* kifah is a "Object" from the rule "Class student".

    // Add values to the "kifah object".
    kifah.name = "kifah";
    kifah.days = 365;
    kifah.c = 85;
    kifah.allCorses = 100;
    kifah.masterClass = 25;

    return 0;
}



/* >>> Example 2 <<< */

#include <iostream>
#include <string>

using namespace std;

//* "Classes" are rules.
class student
{
public:
    string number;
    string address;
};

int main()
{
    //* Creat copy from the rule "Class student".
    student kifah;
    //* kifah is a "Object" from the rule "Class student".

    // Add values to the "kifah object".
    kifah.number = "123";
    kifah.address = "syria";

    return 0;
}

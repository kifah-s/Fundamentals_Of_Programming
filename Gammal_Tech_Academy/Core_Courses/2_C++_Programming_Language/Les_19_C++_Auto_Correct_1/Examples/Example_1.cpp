

/* >>> Example 1 <<< */

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "What is your name: ";
    cin >> name;

    name[0] = toupper(name[0]);

    for (int i = 1; i < name.size(); i++)
        name[i] = tolower(name[i]);

    cout << "Hi " << name << endl;

    return 0;
}

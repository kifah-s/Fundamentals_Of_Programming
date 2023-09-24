

// >>> Baby Name Program ( Version 1 ) <<< */

// >>> Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
string suggestedNamesFun(string sugNam);
string mothersFavoriteFun(string motFav);
string fatherFavoriteFun(string fatFav);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variable ...
    string suggestedNames, mothersFavorite, fatherFavorite;
    // ... End Variable ...

    // ... Function ...
    // Enter the names from which the baby's name will be chosen.
    suggestedNames = suggestedNamesFun(suggestedNames);

    // Names of a mother's favorite things in life.
    mothersFavorite = mothersFavoriteFun(mothersFavorite);

    // Names of a father favorite things in life.
    fatherFavorite = fatherFavoriteFun(fatherFavorite);

    // ... End Function ...

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Baby Name Program ( Version 1 ) .." << endl
         << endl;
}

// Enter the names from which the baby's name will be chosen / Function.
string suggestedNamesFun(string sugNam)
{
    string name;
    cout << "Please enter 5 suggested names for baby name: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Name " << i + 1 << ": ";
        cin >> name;
        sugNam.append(name);
        sugNam.append(" ");
    }

    return sugNam;
}

// Names of a mother's favorite things in life / Function.
string mothersFavoriteFun(string motFav)
{
    string thing;
    cout << "Hi Mama, please enter your top 5 favorite things: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "thing " << i + 1 << ": ";
        cin >> thing;
        motFav.append(thing);
        motFav.append(" ");
    }

    return motFav;
}

// Names of a father favorite things in life / Function.
string fatherFavoriteFun(string fatFav)
{
    string thing;
    cout << "Hi Baba, please enter your top 5 favorite things: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "thing " << i + 1 << ": ";
        cin >> thing;
        fatFav.append(thing);
        fatFav.append(" ");
    }

    return fatFav;
}
// ... End Functions ...

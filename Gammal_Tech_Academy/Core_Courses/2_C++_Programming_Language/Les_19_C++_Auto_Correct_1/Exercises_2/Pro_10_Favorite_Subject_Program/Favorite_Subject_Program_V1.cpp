
//* Favorite Subject Program (Version 1).

/*
* Write a program that asks for the user's favorite subject,
* and then outputs a message with the capitalized subject.

! Input:
! What is your favorite subject? science

! Output:
! Nice! I enjoy learning about Science too.
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

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Favorite Subject Program (Version 1) ..\n"
         << endl;
}

// Get Favorite Science - Function.
string getFavoriteScienceFun(string favS)
{
    cout << "What is your favorite science? ";
    cin >> favS;

    return favS;
}

// Update Favorite Science - Function.
string updateFavoriteScienceFun(string favS)
{
    favS[0] = toupper(favS[0]);

    return favS;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string favoriteScience;

    // Call Functions.
    favoriteScience = getFavoriteScienceFun(favoriteScience);
    favoriteScience = updateFavoriteScienceFun(favoriteScience);

    cout << "\nNice! I enjoy learning about " << favoriteScience << " too.";

    cout << "\n"
         << endl;
}
//* End Function ..

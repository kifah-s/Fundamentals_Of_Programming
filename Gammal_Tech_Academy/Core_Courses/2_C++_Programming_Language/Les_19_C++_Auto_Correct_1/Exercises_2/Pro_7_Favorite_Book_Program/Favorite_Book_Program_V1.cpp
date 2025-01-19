
//* Favorite Book Program (Version 1).

/*
* Create a program that prompts the user for their favorite book genre and then outputs a message with the capitalized genre.

! Input:
! What is your favorite book genre? mystery

! Output:
! Nice! I enjoy reading Mystery books too.
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
    cout << "\n\nYou welcome in Favorite Book Program (Version 1) ..\n"
         << endl;
}

// Get Favorite Book - Function.
string getFavoriteBookFun(string favB)
{
    cout << "What is your favorite book genre? ";
    cin >> favB;

    return favB;
}

// Update Favorite Book - Function.
string updateFavoriteBookFun(string favB)
{
    favB[0] = toupper(favB[0]);

    return favB;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string favoriteBook;

    // Call Functions.
    favoriteBook = getFavoriteBookFun(favoriteBook);
    favoriteBook = updateFavoriteBookFun(favoriteBook);

    cout << "\nNice! I enjoy reading " << favoriteBook << " books too.";

    cout << "\n"
         << endl;
}
//* End Function ..


//* Music Genres And Songs Program (Version 1).

/*
* Create a set of pairs to store music genres along with the number of songs in each genre. Print the sorted pairs.

! Input:
! Please, enter number of music genres: 3

! Please, enter music genres 1: pop
! Please, enter songs 1: 50

! Please, enter music genres 2: rock
! Please, enter songs 2: 20

! Please, enter music genres 3: hiphop
! Please, enter songs 3: 40

! Output:
! Sorted Pairs:
! music genres: rock, songs: 20
! music genres: hiphop, songs: 40
! music genres: pop, songs: 50
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>

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
    cout << "\n\nYou welcome in Music Genres And Songs Program (Version 1) ..\n"
         << endl;
}

// Get Number Of music genres - Function
int getNumberOfMusicGenresFun(int num)
{
    cout << "Please, enter number of music genres: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<float, string>> getElemetsFun(set<pair<float, string>> mySet)
{
    int numOfNam = getNumberOfMusicGenresFun(numOfNam);

    // Temporary Element.
    pair<float, string> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter music genres " << i + 1 << ": ";
        cin >> temporary.second;

        cout << "Please, enter songs " << i + 1 << ": ";
        cin >> temporary.first;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<float, string>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "music genres: " << p.second << ", songs: " << p.first << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<float, string>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..

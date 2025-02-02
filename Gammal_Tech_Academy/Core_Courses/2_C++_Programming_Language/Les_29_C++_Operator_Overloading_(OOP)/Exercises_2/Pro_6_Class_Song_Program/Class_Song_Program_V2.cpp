
//* Class Song Program (Version 2).

/*
* Create a class named Song with attributes title and artist.
* Include a method to play the song.

! Output:
! Now Playing: Shape of you by Ed Sheeran
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
class Song
{
private:
    string title, artist;

public:
    // Setter.
    void setTitle(string t)
    {
        title = t;
    }

    void setArtist(string a)
    {
        artist = a;
    }

    // Getter.
    // string getTitle()
    // {
    //     return title;
    // }
    // string getArtist()
    // {
    //     return artist;
    // }

    void nowPlaying()
    {
        cout << "Now Playing: " << title << " by " << artist << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Song Program (Version 2) ..\n"
         << endl;
}

// Song - Function.
void songFun()
{
    Song s1;
    s1.setTitle("Shape of you");
    s1.setArtist("Ed Sheeran");

    s1.nowPlaying();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    SongFun();

    cout << "\n"
         << endl;
}
//* End Function ..

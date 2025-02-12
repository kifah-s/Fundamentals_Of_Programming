
//* Class Named Song Program (Version 1).

/*
* Create a class named Song with attributes title and artist.
* Include a method to play the song.

! Output:
! Now playing: shape of you by ED sheeran
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
    void playSong()
    {
        cout << "Now playing: " << title << " By " << artist << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Named Song Program (Version 1) ..\n"
         << endl;
}

// Song - Function.
void songFun()
{
    Song song_1;
    song_1.setTitle("shape of you");
    song_1.setArtist("ED sheeran");
    song_1.playSong();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    songFun();

    cout << "\n"
         << endl;
}
//* End Function ..

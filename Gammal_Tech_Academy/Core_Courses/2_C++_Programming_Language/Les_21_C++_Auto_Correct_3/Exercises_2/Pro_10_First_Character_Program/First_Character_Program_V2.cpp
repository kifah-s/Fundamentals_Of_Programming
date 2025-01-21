
//* First Character Program (Version 2).

/*
* Write a program that takes a word as input and capitalizes the first character

! Input:
! Please enter word: hello

! Output:
! capitalizes first character: Hello
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
    cout << "\n\nYou welcome in First Character Program (Version 2) ..\n"
         << endl;
}

// Get Word - Function.
string getWordFun(string w)
{
    cout << "Please enter word: ";
    cin >> w;

    return w;
}

// Capitalizes First Character - Function.
string capitalizesFirstCharacterFun(string w)
{
    w[0] = w[0] - 32;

    return w;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string word;

    // Call Functions.
    word = getWordFun(word);
    word = capitalizesFirstCharacterFun(word);

    cout << "capitalizes first character: " << word;

    cout << "\n"
         << endl;
}
//* End Function ..

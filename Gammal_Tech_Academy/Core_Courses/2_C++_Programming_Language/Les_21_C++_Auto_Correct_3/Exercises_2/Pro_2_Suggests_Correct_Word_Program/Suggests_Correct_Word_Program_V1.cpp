
//* Suggests Correct Word Program (Version 1).

/*
* Create a program that suggests the correct word for "hlo" from the dictionary.

* hello, hi, ok

! Output:
! The closest correct word to "hlo" is: hello
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
    cout << "\n\nYou welcome in Suggests Correct Word Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Vector - Function.
vector<string> addElementsToVectorFun(vector<string> myVec)
{
    // myVec = {"hello", "hi", "ok"};
    myVec.push_back("hello");
    myVec.push_back("hi");
    myVec.push_back("ok");

    return myVec;
}

// Suggests Correct Word - Function.
string suggestsCorrectWordFun(vector<string> myVec, string myWo, string corWo)
{
    int maxCount = 0;
    for (int i = 0; i < myVec.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < myVec[i].size(); j++)
        {
            for (int k = 0; k < myWo.size(); k++)
            {
                if (myVec[i][j] == myWo[k])
                {
                    count++;
                }
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            corWo = myVec[i];
        }
    }

    return corWo;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string myWord = "hlo", correctWord;

    // Call Functions.
    myVector = addElementsToVectorFun(myVector);
    correctWord = suggestsCorrectWordFun(myVector, myWord, correctWord);

    // Print Result.
    cout << "The closest correct word to \"" << myWord << "\" is: "<< correctWord;

    cout << "\n"
         << endl;
}
//* End Function ..

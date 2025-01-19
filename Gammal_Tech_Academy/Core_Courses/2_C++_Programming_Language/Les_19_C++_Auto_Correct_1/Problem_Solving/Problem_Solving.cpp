
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

// Function to check if the word exists in the dictionary
bool isWordInDictionary(const string &word, const vector<string> &dictionary)
{
    return find(dictionary.begin(), dictionary.end(), word) != dictionary.end();
}

// Function to find and print the closest alternatives
void printClosestAlternatives(const string &word, const vector<string> &dictionary)
{
    bool foundAlternative = false;
    for (const auto &w : dictionary)
    {
        if (w.find(word) == 0)
        {
            // check if the word in the dictionary starts with the input word
            cout << (foundAlternative ? ", " : "") << w;
            foundAlternative = true;
        }
    }
    if (!foundAlternative)
    {
        cout << "No suggestions";
    }
    cout << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    // Predefined dictionary
    vector<string> dictionary = {"apple", "application", "apply", "banana", "band", "bandana", "cat", "caterpillar"};

    string inputWord;
    cin >> inputWord;

    if (isWordInDictionary(inputWord, dictionary))
    {
        cout << inputWord << endl;
    }
    else
    {
        printClosestAlternatives(inputWord, dictionary);
    }

    cout << "\n\n";

    return 0;
}

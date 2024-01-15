

// >>> Libraries Program ( Version 1 ) <<< */

/* >>> Libraries program...

When you visit any library to read books, the books are divided according to the first letter of their names, and you can search for the book you want by entering only the first letter in it.

Required: Write a program that asks the user to enter a letter and prints the names of all books that begin with the same letter <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void searchForBooksFun(string b[], int len, char l);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    string books[] = {"Clean Code", "Code Complete", "Introduction to the Theory of Computation", "The Pragmatic Programmer",
                      "Design Patterns", "Effective C++", "Structure and Interpretation of Computer Programs", "The Art of Computer Programming",
                      "Algorithms", "Introduction to Algorithms", "Refactoring", "Python Crash Course", "Eloquent JavaScript", "Head First Java",
                      "C Programming Absolute Beginner's Guide", "The Mythical Man-Month", "Designing Data-Intensive Applications",
                      "Grokking Algorithms", "Continuous Delivery", "The Linux Programming Interface", "test-Driven Development",
                      "Programming Pearls", "Introduction to the Practice of Statistics", "Cracking the Coding Interview", "Domain-Driven Design"};

    char letter;
    int arrLength = sizeof(books) / sizeof(books[0]);
    // ... End Variables ...

    cout << "Please enter a letter: ";
    cin >> letter;

    // ... Functions ...
    searchForBooksFun(books, arrLength, letter);
    // ... End Functions ...

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Libraries Program ( Version 1 ) .." << endl
         << endl;
}

// Search for books / Function.
void searchForBooksFun(string b[], int len, char l)
{
    bool find = false;
    cout << endl << "Books: " << endl;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < b[i].length(); j++)
        {
            if (l == tolower(b[i][0]))
            {
                cout << b[i] << endl;
                find = true;
                break;
            }
        }
    }
    if (find == false)
    {
        cout << "There are no books whose names begin with this letter";
    }

    cout << endl << endl << endl;
    
}
// ... End Functions ...
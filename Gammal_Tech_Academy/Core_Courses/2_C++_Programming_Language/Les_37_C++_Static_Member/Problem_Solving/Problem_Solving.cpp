
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <string>

using namespace std;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    map<string, string> keywordExplanation = {{"Algorithm", "A step-by-step procedure for solving a problem or performing a task."},
                                              {"Data Structure", "A way of organizing and storing data in a computer so it can be accessed and modified efficiently."},
                                              {"Binary Search", "An efficient algorithm for finding an item from a sorted list of items, repeatedly dividing in half the portion of the list that could contain the item."},
                                              {"Recursion", "The process of defining a function or calculating a number by the repeated application of an algorithm."},
                                              {"Big O Notation", "A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity."},
                                              {"Polymorphism", "The ability of a programming language to process objects differently depending on their data type or class."},
                                              {"Inheritance", "A mechanism in object-oriented programming where a new class is derived from an existing class."},
                                              {"Encapsulation", "The bundling of data with the methods that operate on that data, restricting direct access to some of the object's components."},
                                              {"Cloud Computing", "The delivery of different services through the Internet, including data storage, servers, databases, networking, and software."},
                                              {"Machine Learning", "A type of artificial intelligence that allows software applications to become more accurate at predicting outcomes without being explicitly programmed to do so."}};

    string keyword;
    getline(cin, keyword);
    
    if (keywordExplanation.find(keyword) != keywordExplanation.end())
    {
        cout << keywordExplanation[keyword] << endl;
    }
    else
    {
        cout << "Keyword not found." << endl;
    }

    cout << "\n\n";

    return 0;
}

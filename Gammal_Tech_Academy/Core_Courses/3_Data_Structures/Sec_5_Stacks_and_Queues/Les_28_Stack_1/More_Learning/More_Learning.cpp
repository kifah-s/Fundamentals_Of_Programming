
//* >>>>> More Learning <<<<< *//

#include <iostream>
#include <stack>
#include <ctime>

using namespace std;

//* Functions ..

// Print More Learning / Function.
void moreLearningFun()
{
    cout << endl
         << "More Learning .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    moreLearningFun();

    // Create a Stack
    stack<int> myStack;

    // Add elements to the Stack using Push
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Remove the top element using Pop
    myStack.pop();

    // Peek at the top element without removing it
    int topElement = myStack.top();

    // Print the remaining elements in the Stack
    cout << "Stack elements: ";
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    cout << endl
         << endl;

    return 0;
}

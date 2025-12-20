#include <iostream>
#include <queue>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    // Queue container declaration
    queue<int> MyQueue;

    // pushing elements into first stack
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "\nCount: " << MyQueue.size();
    cout << "\nFront: " << MyQueue.front();
    cout << "\nBack: " << MyQueue.back() << endl;

    cout << "\nMyQueue: ";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }

    cout << endl
         << endl;

    return 0;
}
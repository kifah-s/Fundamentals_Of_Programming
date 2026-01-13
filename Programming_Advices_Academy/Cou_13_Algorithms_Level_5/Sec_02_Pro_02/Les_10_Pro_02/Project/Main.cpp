#include <iostream>
#include "Classes/DS/clsMyQueue.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    clsMyQueue<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\nMy Queue: ";
    MyQueue.Print();
    
    cout << "\nMy Queue Size: " << MyQueue.Size() << endl;
    cout << "\nMy Queue Front: " << MyQueue.front() << endl;
    cout << "\nMy Queue Back: " << MyQueue.back() << endl;
    
    MyQueue.pop();
    cout << "\nMy Queue After pop(): ";
    MyQueue.Print();


    cout << endl
         << endl;

    return 0;
}
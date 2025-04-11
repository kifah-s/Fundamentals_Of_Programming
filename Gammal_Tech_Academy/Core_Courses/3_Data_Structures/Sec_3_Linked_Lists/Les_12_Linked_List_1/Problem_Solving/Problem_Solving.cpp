
//*  Problem Solving ..

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

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteValue(int value)
    {
        Node *temp = head, *prev = nullptr;
        while (temp != nullptr && temp->data != value)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
            return;

        if (temp == head)
        {
            head = head->next;
        }
        else
        {
            prev->next = temp->next;
        }
        delete temp;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "EMPTY" << endl;
            return;
        }
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int Q, queryType, value;
    LinkedList list;
    cin >> Q;
    
    for (int i = 0; i < Q; i++)
    {
        cin >> queryType;
        switch (queryType)
        {
        case 1:
            cin >> value;
            list.insert(value);
            break;
        case 2:
            cin >> value;
            list.deleteValue(value);
            break;
        case 3:
            list.display();
            break;
        }
    }

    cout << endl
         << endl;

    return 0;
}

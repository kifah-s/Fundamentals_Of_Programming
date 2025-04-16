
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
    int projectID;
    int teamMembers;
    Node *next;
    Node(int id, int members) : projectID(id), teamMembers(members), next(nullptr) {}
};

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

void insertAtEnd(Node *&head, int id, int members)
{
    Node *newNode = new Node(id, members);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void reverseLinkedList(Node *&head)
{
    if (!head || !head->next)
        return;
    Node *rest = head->next;
    reverseLinkedList(rest);
    head->next->next = head;
    head->next = nullptr;
    head = rest;
}

void printList(Node *node)
{
    while (node)
    {
        cout << node->projectID << endl;
        node = node->next;
    }
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int n;
    cin >> n;

    Node *head = nullptr;

    for (int i = 0; i < n; ++i)
    {
        int id, members;
        cin >> id >> members;
        insertAtEnd(head, id, members);
    }

    reverseLinkedList(head);

    printList(head);

    cout << endl
         << endl;

    return 0;
}

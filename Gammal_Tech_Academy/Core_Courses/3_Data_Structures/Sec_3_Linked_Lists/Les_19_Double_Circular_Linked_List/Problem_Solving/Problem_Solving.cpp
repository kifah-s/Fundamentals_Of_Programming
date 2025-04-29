
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
    int locationID;
    int ecoValue;
    Node *next, *prev;
    Node(int id, int value) : locationID(id), ecoValue(value), next(nullptr), prev(nullptr) {}
};

class EcoList
{
    Node *head;
    map<int, Node *> nodeMap;

public:
    EcoList() : head(nullptr) {}

    void addNode(int locationID, int ecoValue)
    {
        if (nodeMap.find(locationID) != nodeMap.end())
        {
            // Update ecoValue if locationID exists
            nodeMap[locationID]->ecoValue = ecoValue;
            return;
        }
        Node *newNode = new Node(locationID, ecoValue);
        if (!head)
        {
            head = newNode;
            head->next = head->prev = head;
        }
        else
        {
            // Insert in sorted order
            Node *curr = head;
            while (curr->next != head && curr->next->locationID < locationID)
                curr = curr->next;
            newNode->next = curr->next;
            newNode->prev = curr;
            curr->next->prev = newNode;
            curr->next = newNode;
            if (curr == head && locationID < head->locationID)
                head = newNode; // Update head for lower locationID
        }
        nodeMap[locationID] = newNode;
    }

    void removeNode(int locationID)
    {
        if (nodeMap.find(locationID) == nodeMap.end())
            return;

        Node *delNode = nodeMap[locationID];
        if (delNode == head && head->next == head)
        {
            head = nullptr;
        }
        else
        {
            delNode->prev->next = delNode->next;
            delNode->next->prev = delNode->prev;
            if (delNode == head)
                head = delNode->next;
        }
        nodeMap.erase(locationID);
        delete delNode;
    }

    void printList()
    {
        if (!head)
        {
            cout << "EMPTY\n";
            return;
        }
        Node *curr = head;
        do
        {
            cout << curr->locationID << " " << curr->ecoValue << "\n";
            curr = curr->next;
        } while (curr != head);
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

    int N;
    cin >> N;
    EcoList ecoList;
    while (N--)
    {
        string command;
        cin >> command;
        if (command == "ADD")
        {
            int id, value;
            cin >> id >> value;
            ecoList.addNode(id, value);
        }
        else if (command == "REMOVE")
        {
            int id;
            cin >> id;
            ecoList.removeNode(id);
        }
        else if (command == "PRINT")
        {
            ecoList.printList();
        }
    }

    cout << endl
         << endl;

    return 0;
}

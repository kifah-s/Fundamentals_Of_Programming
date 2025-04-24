
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
#include <unordered_map>

using namespace std;

//* Struct ..

struct Node
{
    int id;
    Node *prev;
    Node *next;
    Node(int id) : id(id), prev(nullptr), next(nullptr) {}
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

void addAfter(Node *&head, Node *&tail, unordered_map<int, Node *> &nodeMap, int afterID, int newID)
{
    Node *newNode = new Node(newID);
    nodeMap[newID] = newNode;
    if (afterID == -1)
    {
        if (head)
        {
            newNode->next = head;
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
    }
    else
    {
        Node *afterNode = nodeMap[afterID];
        newNode->next = afterNode->next;
        newNode->prev = afterNode;
        if (afterNode->next)
        {
            afterNode->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        afterNode->next = newNode;
    }
}

void remove(Node *&head, Node *&tail, unordered_map<int, Node *> &nodeMap, int removeID)
{
    Node *removeNode = nodeMap[removeID];
    if (removeNode->prev)
    {
        removeNode->prev->next = removeNode->next;
    }
    else
    {
        head = removeNode->next;
    }
    if (removeNode->next)
    {
        removeNode->next->prev = removeNode->prev;
    }
    else
    {
        tail = removeNode->prev;
    }
    nodeMap.erase(removeID);
    delete removeNode;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int n, m;
    cin >> n >> m;
    
    Node *head = nullptr;
    Node *tail = nullptr;
    
    unordered_map<int, Node *> nodeMap;

    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        addAfter(head, tail, nodeMap, tail ? tail->id : -1, id);
    }
    
    for (int i = 0; i < m; i++)
    {
        char op;
        int x, y;
        cin >> op;
        if (op == 'A')
        {
            cin >> x >> y;
            addAfter(head, tail, nodeMap, x, y);
        }
        else
        {
            cin >> x;
            remove(head, tail, nodeMap, x);
        }
    }
    
    for (Node *curr = head; curr != nullptr; curr = curr->next)
    {
        cout << curr->id;
        if (curr->next)
            cout << " ";
    }

    cout << endl
         << endl;

    return 0;
}

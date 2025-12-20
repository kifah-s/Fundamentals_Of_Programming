#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// Create Node.
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    WelcomeMessage();

    Node *head;

    Node *node1 = NULL;
    Node *node2 = NULL;
    Node *node3 = NULL;

    // Allocate 3 nodes in the heap.
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    // Assign value values.
    node1->value = 1;
    node2->value = 2;
    node3->value = 3;

    // Connect nodes.
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print linked list value.
    head = node1;
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }

    cout << endl
         << endl;

    return 0;
}
#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// Create a node.
class Node
{
public:
    int value;
    Node *next;
};

// Insert node at beginning.
void InsertAtBeginning(Node *&head, int value)
{
    // Allocate memory to node.
    Node *new_node = new Node();

    // Insert the data.
    new_node->value = value;
    new_node->next = head;

    // Move head to new node.
    head = new_node;
}

// Print the linked list.
void PrintList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

// Find node.
Node *Find(Node *head, int value)
{
    while (head != NULL)
    {
        if (head->value == value)
        {
            return head;
        }

        head = head->next;
    }

    return NULL;
}

// Insert node after another node.
void InsertAfter(Node *prev_node, int value)
{
    if (prev_node == NULL)
    {
        cout << "\nThe given previous node cannot ne NULL" << endl;
        return;
    }

    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert node at end.
void InsertAtEnd(Node *&head, int value)
{
    Node *new_node = new Node();

    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *lastNode = head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = new_node;

    return;
}

// Delete Node.
void DeleteNode(Node *&head, int value)
{
    Node *current = head, *prev = head;

    if (head == NULL)
    {
        return;
    }

    if (current->value == value)
    {
        head = current->next;
        delete current; // Free from memory.
        return;
    }

    // Find the key to be delete.
    while (current != NULL && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    // If the value is not present.
    if (current == NULL)
    {
        return;
    }

    // Remove the node.
    prev->next = current->next;
    delete current; // Free from memory.
}

// Delete First Node.
void DeleteFirstNode(Node *&head)
{
    Node *current = head;

    if (head == NULL)
    {
        return;
    }

    head = current->next;
    delete current; // Free from memory.

    return;
}

// Delete Last node
void DeleteLastNode(Node *&head)
{
    Node *current = head, *prev = head;

    if (head == NULL)
    {
        return;
    }

    if (current->next == NULL)
    {
        head = NULL;
        delete current; // Free from memory.
        return;
    }

    // Find the key to be deleted.
    while (current != NULL && current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    // Remove the node.
    prev->next = NULL;
    delete current; // Free from memory
}

int main()
{
    WelcomeMessage();

    Node *head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);

    cout << "Linked List: ";
    PrintList(head);

    DeleteLastNode(head);
    cout << "\nNew Linked List: ";
    PrintList(head);

    cout << endl
         << endl;

    return 0;
}
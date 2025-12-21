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

Node *Find(Node *head , int value)
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

int main()
{
    WelcomeMessage();

    Node *head = NULL;
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    cout << "Linked List: ";
    PrintList(head);

    Node *N1 = Find(head, 2);
    if (N1 != NULL)
    {
        cout << "\nNode Found :)" << endl;
    }
    else
    {
        cout << "\nNode Not Found :(" << endl;
    }

    cout << endl
         << endl;

    return 0;
}
#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// Create a node
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
};

// Insert At Beginning.
void InsertAtBeginning(Node *&head, int value)
{
    /*
        1 - Create a new node with the desired value.
        2 - Set the next pointer of the new node to the current head of the list.
        3 - Set the previous pointer of the current head to the new node.
        4 - Set the new node as the new head of the list.
    */

    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
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

// Insert After.
void InsertAfter(Node *current, int value)
{
    /*  1 - Create a new node with the desired value.
         2-Set the next pointer of the new node to the next node of the current node.
         3-Set the previous pointer of the new node to the current node.
         4-Set the next pointer of the current node to the new node.
         5-Set the previous pointer of the next node to the new node(if it exists).
    */

    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != NULL)
    {
        current->next->prev = newNode;
    }
    current->next = newNode;
}

// Print node details.
void PrintNodeDetails(Node *head)
{
    if (head->prev != NULL)
    {
        cout << head->prev->value;
    }
    else
    {
        cout << "NULL";
    }

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
    {
        cout << head->next->value << "\n";
    }
    else
    {
        cout << "NULL";
    }
}

// Print linked list details.
void PrintListDetails(Node *head)
{
    cout << "\n\n";
    while (head != NULL)
    {
        PrintNodeDetails(head);
        head = head->next;
    }
}

// Print linked list.
void PrintList(Node *head)
{
    cout << "NULL <--> ";
    while (head != NULL)
    {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    WelcomeMessage();

    Node *head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Content:\n";
    PrintList(head);
    PrintListDetails(head);

    Node *N1 = Find(head, 2);

    InsertAfter(N1, 500);

    cout << "\n\n\nLinked List Content after InsertAfter:\n";
    PrintList(head);
    PrintListDetails(head);

    cout << endl
         << endl;

    return 0;
}
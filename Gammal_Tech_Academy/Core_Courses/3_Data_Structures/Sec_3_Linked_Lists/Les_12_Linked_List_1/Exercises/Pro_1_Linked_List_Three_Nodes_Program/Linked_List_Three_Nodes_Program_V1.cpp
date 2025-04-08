
//* Linked List Three Nodes Program (Version 1).

/*
* Write a program to create an empty linked list and add three nodes with data values 2, 4, and 6.
* Print the elements of the linked list.

! Output:
! 2 4 6
*/

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

//* Struct ..
struct Node
{
    int data;
    struct Node *next;
};

//* End Struct ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Three Nodes Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer.
    Node *head, *temp;

    head = (Node *)malloc(sizeof(Node));
    if (head == NULL)
    { // Check if memory allocation succeeded.
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    head->data = 2;
    head->next = (Node *)malloc(sizeof(Node));
    if (head->next == NULL)
    { // Check if memory allocation succeeded.
        cout << "Memory allocation failed!" << endl;
        free(head); // Free previously allocated memory before exiting.
        return 1;
    }

    head->next->data = 4;
    head->next->next = (Node *)malloc(sizeof(Node));
    if (head->next->next == NULL)
    {
        cout << "Memory allocation failed!" << endl;
        free(head->next); // Free the second node.
        free(head);       // Free the first node.
        return 1;
    }

    head->next->next->data = 6;
    head->next->next->next = NULL;

    // Print the linked list.
    temp = head;
    cout << "Data: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free the allocated memory.
    temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next; // Save the next node before freeing.
        free(temp);                  // Free the current node.
        temp = nextNode;             // Move to the next node.
    }
    cout << "\nMemory freed successfully!" << endl;

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

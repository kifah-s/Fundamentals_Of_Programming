
//*  Example 1 ..

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

//* Functions ..
// Welcome Message Function
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

//* Struct ..
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Call Functions
    printWelcomeMessageFun();

    Node *head, *temp;
    head = (Node *)malloc(sizeof(Node));

    if (head == NULL)
    { // Check if memory allocation succeeded.
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    head->data = 5;
    head->next = (Node *)malloc(sizeof(Node));

    if (head->next == NULL)
    { // Check if memory allocation succeeded.
        cout << "Memory allocation failed!" << endl;
        free(head); // Free previously allocated memory before exiting.
        return 1;
    }

    head->next->data = 6;
    head->next->next = (Node *)malloc(sizeof(Node));

    if (head->next->next == NULL)
    { // Check if memory allocation succeeded.
        cout << "Memory allocation failed!" << endl;
        free(head->next); // Free the second node.
        free(head);       // Free the first node.
        return 1;
    }

    head->next->next->data = 7;
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

    cout << "\nMemory freed successfully!\n\n" << endl;

    return 0;
}
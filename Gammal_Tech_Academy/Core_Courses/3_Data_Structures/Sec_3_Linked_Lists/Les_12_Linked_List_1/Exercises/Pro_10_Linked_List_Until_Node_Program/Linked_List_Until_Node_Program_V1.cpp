
//* Linked List Until Node Program (Version 1).

/*
* Write a program to print the data values of the linked list until a node with data value 5 is encountered.

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
    cout << "\n\nYou welcome in Linked List Until Node Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
void dynamicMemoryAllocationFun(Node *&head)
{
    // HEAD.
    head = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head == nullptr)
    {
        cout << "Memory allocation failed for NODE 1 (HEAD)." << endl;
        return; // Exit if allocation was unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 1 (HEAD)." << endl;
    }

    // NODE 2.
    head->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 2." << endl;
        free(head); // Free First Node.
        return;     // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 2." << endl;
    }

    // NODE 3.
    head->next->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 3." << endl;
        free(head->next); // Free Second Node.
        free(head);       // Free First Node.
        return;           // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 3." << endl;
    }

    // NODE 4.
    head->next->next->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 4." << endl;
        free(head->next->next); // Free Third Node.
        free(head->next);       // Free Second Node.
        free(head);             // Free First Node.
        return;                 // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 4." << endl;
    }
    cout << endl;

    // NODE 5.
    head->next->next->next->next = NULL;
}

// Initialize Linked List - Function.
void initializeLinkedListFun(Node *head)
{
    head->data = 2;
    head->next->data = 4;
    head->next->next->data = 5;
    head->next->next->next->data = 8;
}

// Print Linked List - Function.
void printLinkedListFun(Node *head)
{
    int count = 1;

    cout << "Linked List: " << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Value in Node " << count << ": " << temp->data << endl;
        temp = temp->next;
        count++;
    }
    cout << endl;
}

// Reverse Linked List - Function.
void reverseLinkedListFun(Node *&head)
{
    // Reverse Linked List.
    Node *temp, *next, *prev;

    prev = NULL;
    temp = head;
    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;

    // Print Reverse Linked List.
    int count = 1;
    cout << "Reverse Linked List: " << endl;
    temp = head;
    while (temp != NULL)
    {
        cout << "Value in Node " << count << ": " << temp->data << endl;
        temp = temp->next;
        count++;
    }
    cout << endl;
}

// Print Linked List Length - Function.
void printLikedListLengthFun(Node *head)
{
    int length = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    cout << "Length of linked list is: " << length << endl;
}

// Found Number 5 - Function.
void foundNumber5Fun(Node *head)
{
    int number = 5;
    bool found = false;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == number)
        {
            found = true;
            break;
        }

        temp = temp->next;
    }

    if (found)
    {
        cout << "\nFound Number " << number << endl;
    }
    else
    {
        cout << "\nNot Found Number " << number << endl;
    }
}

// Sum Data Values - Function.
void sumDataValuesFun(Node *head)
{
    int sum = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }

    cout << "\nSum Of Data Values: " << sum << endl;
}

// Minimum Data Value - Function.
void minimumDataValueFun(Node *head)
{
    int minimum = head->data;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data < minimum)
        {
            minimum = temp->data;
        }

        temp = temp->next;
    }

    cout << "\nMinimum Data Value: " << minimum << endl;
}

// Linked List Is Empty OR Not - Function.
void linkedListIsEmptyORNotFun(Node *head)
{
    bool empty = true;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data != NULL)
        {
            empty = false;
            break;
        }

        temp = temp->next;
    }

    if (empty)
    {
        cout << "Linked List Empty.\n"
             << endl;
    }
    else
    {
        cout << "Linked List NOT Empty.\n"
             << endl;
    }
}

// Until Node With Data Value 5 - Function.
void untilNodeWithDataValue5Fun(Node *head)
{
    int num = 5;

    cout << "\nData: ";
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            break;
        }
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next; // Save Next Node Before Freeing.
        free(temp);                  // Free Current Node.
        temp = nextNode;             // Move To Next Node.
    }
    cout << "\nMemory freed successfully!" << endl;
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointers And Variables.
    Node *head;

    dynamicMemoryAllocationFun(head);
    initializeLinkedListFun(head);
    printLinkedListFun(head);
    // reverseLinkedListFun(head);
    linkedListIsEmptyORNotFun(head);
    printLikedListLengthFun(head);
    foundNumber5Fun(head);
    sumDataValuesFun(head);
    minimumDataValueFun(head);
    untilNodeWithDataValue5Fun(head);
    freeAllocatedMemoryFun(head);

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

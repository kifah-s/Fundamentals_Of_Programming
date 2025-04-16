
//* Linked List Threshold Value Using Recursion Program (Version 4).

/*
* Write a program to find and print the count of numbers greater than a given value in the linked list using recursion.

! Input:
! Please, enter a number (That number represents the number of numbers in the linked list): 4
! Enter number: 1
! Enter number: 2
! Enter number: 3
! Enter number: 4
! Please, enter the threshold value: 1

! Output:
! Count of numbers greater than 1: 3
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
    int number;
    Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Threshold Value Using Recursion Program (Version 4) ..\n"
         << endl;
}

// Get Number Of Numbers In Linked List - Function.
int getNumberOfNumbersInLinkedListFun()
{
    int num = 0;
    cout << "Please, enter a number (That number represents the number of numbers in the linked list): ";
    cin >> num;

    return num;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter number: ";
        cin >> temp->number;

        temp->next = NULL;

        return temp;
    }

    temp->next = addNodesFun(temp->next);

    return temp;
}

// Get Threshold Value - Function.
int getThresholdValueFun()
{
    int num = 0;
    cout << "Please, enter the threshold value: ";
    cin >> num;

    return num;
}

// Count Of Numbers Greater Than Threshold Value - Recursion Function.
int countOfNumbersGreaterThanThresholdValueRecFun(Node *head, int thrVal, int cou = 0)
{
    Node *temp = head;
    if (temp != NULL)
    {
        if (temp->number > thrVal)
        {
            cou++;
        }

        return countOfNumbersGreaterThanThresholdValueRecFun(temp->next, thrVal, cou);
    }

    return cou;
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
    cout << "----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables and Pointer.
    Node *head = NULL;
    int NumberOfNumbersInLinkedList = 0, thresholdValue = 0;

    // Call Functions.
    printWelcomeMessageFun();
    NumberOfNumbersInLinkedList = getNumberOfNumbersInLinkedListFun();
    for (int i = 0; i < NumberOfNumbersInLinkedList; i++)
    {
        head = addNodesFun(head);
    }

    thresholdValue = getThresholdValueFun();

    cout << "\n--------------------" << endl;
    cout << "Count of numbers greater than " << thresholdValue << ": " << countOfNumbersGreaterThanThresholdValueRecFun(head, thresholdValue);
    cout << "\n--------------------" << endl;
    freeAllocatedMemoryFun(head);

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

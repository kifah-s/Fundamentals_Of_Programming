
//* Linked List Difference Between Using Recursion Program (Version 1).

/*
* Write a program to find and print the difference between the sum of even numbers and the sum of odd numbers in the linked list.

! Input:
! Please, enter a number (That number represents the number of numbers in the linked list): 4
! Enter number: 1
! Enter number: 2
! Enter number: 3
! Enter number: 4
! Enter number: 5

! Output:
! Difference between sum of even numbers and sum of odd numbers: -3
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
    cout << "\n\nYou welcome in Linked List Difference Between Using Recursion Program (Version 1) ..\n"
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

// Difference Between - Recursion Function.
int differenceBetweenRecFun(Node *head, int sumEven = 0, int sumOdd = 0)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return sumEven - sumOdd;
    }
    if (temp->number % 2 == 0)
    {
        sumEven = sumEven + temp->number;
    }
    if (temp->number % 2 != 0)
    {
        sumOdd = sumOdd + temp->number;
    }
    
    return differenceBetweenRecFun(temp->next, sumEven, sumOdd);
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
    int NumberOfNumbersInLinkedList = 0;

    // Call Functions.
    printWelcomeMessageFun();
    NumberOfNumbersInLinkedList = getNumberOfNumbersInLinkedListFun();
    for (int i = 0; i < NumberOfNumbersInLinkedList; i++)
    {
        head = addNodesFun(head);
    }

    cout << "\n--------------------" << endl;
    cout << "Difference between sum of even numbers and sum of odd numbers: " << differenceBetweenRecFun(head);
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

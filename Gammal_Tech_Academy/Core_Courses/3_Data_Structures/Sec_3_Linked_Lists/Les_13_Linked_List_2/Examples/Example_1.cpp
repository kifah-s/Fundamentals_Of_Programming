
//*  Example 1 ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <cstring>

using namespace std;

//* Struct ..
struct Node
{
    char name[25];
    int payment = 0;
    struct Node *next;
};

//* End Struct ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

// Add - Function.
void addFun(Node *head)
{
    char name[25];
    int payment = 0;

    cout << "Please, enter the name: ";
    cin >> name;
    cout << "Please, enter the payment: ";
    cin >> payment;

    if (head->payment == -1)
    {
        head->payment = payment;
        strcpy(head->name, name);
        head->next = NULL;
    }
    else
    {
        while (head->next != NULL)
        {
            head = head->next;
        }

        head->next = (Node *)malloc(sizeof(Node));
        head = head->next;
        head->next = NULL;
        head->payment = payment;
        strcpy(head->name, name);
    }
}

// Show - Function.
void showFun(Node *head)
{
    while (head != NULL)
    {
        cout << "--------------------" << endl;
        cout << "Name: " << head->name << endl;
        cout << "Payment: " << head->payment << endl;
        cout << "--------------------" << endl;
        head = head->next;
    }
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

// Select Your Choice - Function.
void selectYourChoiceFun(Node *head)
{
    int answer = 0;

    do
    {
        cout << "\n1) Add" << endl
             << "2) Show" << endl
             << "Please, enter a number: ";
        cin >> answer;

        if (answer == 1)
        {
            addFun(head);
        }
        else if (answer == 2)
        {
            showFun(head);
        }
    } while (answer != 0);

    freeAllocatedMemoryFun(head);
}

//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    Node *head;

    head = (Node *)malloc(sizeof(Node));
    head->payment = -1;

    selectYourChoiceFun(head);

    cout << endl
         << endl;

    return 0;
}

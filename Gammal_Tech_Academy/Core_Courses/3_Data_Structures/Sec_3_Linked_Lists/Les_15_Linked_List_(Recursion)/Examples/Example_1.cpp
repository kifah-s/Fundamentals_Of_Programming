
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
#include <cstring>

using namespace std;

//* Struct ..

struct Node
{
    char name[25];
    int payment;
    Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Add Person Program (Version 1) ..\n"
         << endl;
}

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter the name: ";
        cin >> temp->name;
        cout << "Please, enter the payment: ";
        cin >> temp->payment;

        temp->next = NULL;

        return temp;
    }

    temp->next = addNodesFun(temp->next);

    return temp;
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "--------------------" << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Payment: " << temp->payment << endl;
        cout << "--------------------" << endl;
        temp = temp->next;
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
    cout << "----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Handling User Choice - Function.
void handlingUserChoiceFun(Node *head)
{
    int answer = 0;

    do
    {
        answer = displayMenuFun();

        switch (answer)
        {
        case 1:
            head = addNodesFun(head);
            break;

        case 2:
            showNodesFun(head);
            break;

        default:
            break;
        }

    } while (answer != 3);

    freeAllocatedMemoryFun(head);
}

//* End Function ..

int main()
{
    // Declare Pointers And Variables.
    Node *head = NULL;

    // Call Functions.
    printWelcomeMessageFun();
    handlingUserChoiceFun(head);

    cout << endl
         << endl;

    return 0;
}

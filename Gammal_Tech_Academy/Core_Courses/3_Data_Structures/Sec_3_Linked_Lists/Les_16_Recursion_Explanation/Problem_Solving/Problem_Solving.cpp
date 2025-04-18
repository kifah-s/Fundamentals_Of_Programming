
//*  Problem Solving ..

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
    int projectID;
    int resources;
    Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

// Function to add a new node to the linked list
void insertNode(Node **head_ref, int projectID, int resources)
{
    Node *new_node = new Node();
    new_node->projectID = projectID;
    new_node->resources = resources;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Recursive function to calculate total resources
int totalResources(Node *node)
{
    if (node == NULL)
        return 0;
    return node->resources + totalResources(node->next);
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    Node *head = NULL;

    int n, projectID, resources;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> projectID >> resources;
        insertNode(&head, projectID, resources);
    }
    
    cout << totalResources(head) << endl;

    cout << endl
         << endl;

    return 0;
}

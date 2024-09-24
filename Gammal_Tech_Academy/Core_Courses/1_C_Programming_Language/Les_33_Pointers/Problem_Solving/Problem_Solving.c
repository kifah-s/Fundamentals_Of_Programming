//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

typedef struct
{
    int id;
    int status;
    int load;
} Node;

void toggleNodeStatus(Node *nodes[], int id)
{
    nodes[id]->status = !nodes[id]->status;
}

void updateNodeLoad(Node *nodes[], int id, int newLoad)
{
    nodes[id]->load = newLoad;
}

void displayActiveNodes(Node *nodes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nodes[i]->status == 1)
        {
            printf("%d %d\n", nodes[i]->id, nodes[i]->load);
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    scanf("%d", &n);
    Node *nodes[n];

    for (int i = 0; i < n; i++)
    {
        nodes[i] = (Node *)malloc(sizeof(Node));
        nodes[i]->id = i;
        nodes[i]->status = 0; // Initially, all nodes are inactive
        nodes[i]->load = 0;
    }

    // Example Commands
    toggleNodeStatus(nodes, 3);
    updateNodeLoad(nodes, 3, 500);
    displayActiveNodes(nodes, n);
    toggleNodeStatus(nodes, 2);
    updateNodeLoad(nodes, 2, 300);
    displayActiveNodes(nodes, n);

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(nodes[i]);
    }

    printf("\n\n");

    return 0;
}
//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

typedef struct
{
    int ID;
    char Type[51];
    int Quantity;
    int Location;
} Item;

void addItem(Item *warehouse, int *count, int ID, char *Type, int Quantity, int Location)
{
    warehouse[*count].ID = ID;
    strcpy(warehouse[*count].Type, Type);
    warehouse[*count].Quantity = Quantity;
    warehouse[*count].Location = Location;
    (*count)++;
}

int findItem(Item *warehouse, int count, int ID)
{
    for (int i = 0; i < count; i++)
    {
        if (warehouse[i].ID == ID)
        {
            return i;
        }
    }
    return -1;
}

void updateItem(Item *warehouse, int index, char *Type, int Quantity,
                int Location)
{
    strcpy(warehouse[index].Type, Type);
    warehouse[index].Quantity = Quantity;
    warehouse[index].Location = Location;
}

int main()
{
    problemSolvingFun();

    int N;
    scanf("%d", &N);
    Item warehouse[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        char command;
        int ID, Quantity, Location;
        char Type[51];
        scanf(" %c", &command);
        if (command == 'A')
        {
            scanf("%d %s %d %d", &ID, Type, &Quantity, &Location);
            addItem(warehouse, &count, ID, Type, Quantity, Location);
        }
        else if (command == 'F')
        {
            scanf("%d", &ID);
            int index = findItem(warehouse, count, ID);
            if (index != -1)
            {
                printf("%d %s %d %d\n", warehouse[index].ID, warehouse[index].Type, warehouse[index].Quantity, warehouse[index].Location);
            }
            else
            {
                printf("Not Found\n");
            }
        }
        else if (command == 'U')
        {
            scanf("%d %s %d %d", &ID, Type, &Quantity, &Location);
            int index = findItem(warehouse, count, ID);
            if (index != -1)
            {
                updateItem(warehouse, index, Type, Quantity, Location);
            }
        }
    }

    printf("\n\n");

    return 0;
}
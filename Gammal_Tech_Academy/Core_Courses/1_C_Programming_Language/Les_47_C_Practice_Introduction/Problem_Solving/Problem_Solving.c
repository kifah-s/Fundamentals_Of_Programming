//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100

typedef struct
{
    int x, y;
} Point;

int office[MAX][MAX];
int visited[MAX][MAX];

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void initVisited(int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            visited[i][j] = 0;
}

int isValid(int x, int y, int m, int n)
{
    return x >= 0 && y >= 0 && x < m && y < n;
}

int bfs(int startX, int startY, int m, int n)
{
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    initVisited(m, n);
    Point queue[MAX * MAX];
    int front = 0, rear = 0;

    queue[rear++] = (Point){startX, startY};
    visited[startX][startY] = 1;

    while (front < rear)
    {
        Point p = queue[front++];
        for (int i = 0; i < 4; i++)
        {
            int newX = p.x + dx[i];
            int newY = p.y + dy[i];
            
            if (isValid(newX, newY, m, n) && !visited[newX][newY] &&
                office[newX][newY] != 1)
            {
                visited[newX][newY] = visited[p.x][p.y] + 1;
                if (office[newX][newY] == 2)
                    return visited[newX][newY] - 1;
                queue[rear++] = (Point){newX, newY};
            }
        }
    }
    return INT_MAX;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &office[i][j]);
    int maxDist = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (office[i][j] == 1)
            {
                int dist = bfs(i, j, m, n);
                if (dist > maxDist)
                    maxDist = dist;
            }
        }
    }
    printf("%d\n", maxDist);

    printf("\n\n");

    return 0;
}
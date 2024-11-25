//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <limits.h>

#define MAX_N 1000

int dist[MAX_N];
int graph[MAX_N][MAX_N];
int visited[MAX_N];

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int minDistance(int n)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
    {
        if (!visited[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int src, int n)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < n - 1; count++)
    {
        int u = minDistance(n);
        visited[u] = 1;
        for (int v = 0; v < n; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        scanf("%d %d %d", &a, &b, &w);
        a--;
        b--;
        graph[a][b] = w;
        graph[b][a] = w; // Assuming the network is undirected
    }

    int s, d;

    scanf("%d %d", &s, &d);

    s--;
    d--;

    dijkstra(s, n);

    printf("%d\n", dist[d]);

    printf("\n\n");

    return 0;
}
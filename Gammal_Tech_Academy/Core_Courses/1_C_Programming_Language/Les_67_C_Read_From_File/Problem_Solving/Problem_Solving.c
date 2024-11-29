//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

int N, M;
char image[100][100];
int visited[100][100];

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void searchCircle(int row, int col)
{
    if (row < 0 || row >= N || col < 0 || col >= M || image[row][col] == '.' || visited[row][col])
        return;
    visited[row][col] = 1;
    searchCircle(row - 1, col);
    searchCircle(row + 1, col);
    searchCircle(row, col - 1);
    searchCircle(row, col + 1);
}

int countCircles()
{
    memset(visited, 0, sizeof(visited));
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (image[i][j] == 'o' && !visited[i][j])
            {
                searchCircle(i, j);
                count++;
            }
        }
    }
    return count;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++)
        {
            scanf("%s", image[i]);
        }
        printf("%d\n", countCircles());
    }

    printf("\n\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    int a[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (a[i][j] == 0 && i != j)
            {
                cnt++;
            }
        }
    }
    if (cnt == row * row - row)
    {
        printf("Diagonal matrix\n");
    }
    else
    {
        printf("Not diagonal matrix\n");
    }
    return 0;
}
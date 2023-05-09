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
    int flag = 0;
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (a[i][j] == 0 && i != j)
            {
                cnt++;
            }
            if (i == j && a[i][j] != 1)
            {
                flag = 1;
            }
        }
    }
    if (cnt == row * row - row && flag == 0)
    {
        printf("Unit matrix\n");
    }
    else
    {
        printf("Not Unit matrix\n");
    }
    return 0;
}
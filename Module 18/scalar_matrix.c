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
    int flag = 0, value = a[0][0];
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (a[i][j] == 0 && i != j)
            {
                cnt++;
            }
            if (i == j && a[i][j] != value)
            {
                flag = 1;
            }
        }
    }
    if (cnt == row * row - row && flag == 0)
    {
        printf("Scalar matrix\n");
    }
    else
    {
        printf("Not scalar matrix\n");
    }
    return 0;
}
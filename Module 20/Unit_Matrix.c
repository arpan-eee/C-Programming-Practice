#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag++;
                break;
            }
            if (i != j && arr[i][j] != 0)
            {
                flag++;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
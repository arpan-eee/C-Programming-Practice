#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0,test;
    scanf("%d",&test);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]==test)
            {
                flag=1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}
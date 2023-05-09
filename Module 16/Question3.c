#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, flag = -1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            flag = i;
            break;
        }
    }
    if (flag == -1)
    {
        printf("%d", arr[n - 1]);
    }
    else if (flag > 0)
    {
        printf("%d", arr[flag - 1]);
    }
    else
    {
        printf("0");
    }

    return 0;
}
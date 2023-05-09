#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int primary=0,secondary=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                primary+=arr[i][j];
            }
            if(i+j==n-1)
            {
                secondary+=arr[i][j];
            }
        }
    }
    int ans=primary-secondary;
    if(ans<0)
    {
        printf("%d",-ans);
    }
    else
    {
        printf("%d",ans);
    }

    return 0;
}
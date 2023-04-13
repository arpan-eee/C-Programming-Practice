#include <stdio.h>
int main()
{
    int n, lowest;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    lowest = arr[0];
    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            pos = i+1;
        };
    }
    printf("%d %d",lowest,pos);
}
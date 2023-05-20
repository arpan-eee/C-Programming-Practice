#include <stdio.h>
#include <string.h>
#include <math.h>
int max(int *arr, int n, int i)
{
    if (i == n)
        return arr[n-1];
    int m = max(arr, n, i + 1);
    if (arr[i] > m)
        return arr[i];
    else
        return m;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m =max(arr, n, 0);
    printf("%d",m);
    return 0;
}
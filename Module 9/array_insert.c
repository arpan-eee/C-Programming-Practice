#include <stdio.h>
int main()
{
    int n, np, nv;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &np, &nv);
    for (int i = n; i >= np+1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[np]=nv;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
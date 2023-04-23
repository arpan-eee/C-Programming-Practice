#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr0[n + m];
    for (int i = 0; i < n; i++)
    {
        arr0[i] = arr1[i];
    }
    for (int i = n, j = 0; i < n + m; i++, j++)
    {
        arr0[i] = arr2[j];
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr0[i]);
    }
}
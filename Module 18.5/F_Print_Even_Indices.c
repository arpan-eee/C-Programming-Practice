#include <stdio.h>
#include <string.h>
#include <math.h>
void fun(int i, int n, int arr[])
{
    if (i == n)
        return;
    fun(i+1, n, arr);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
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
    fun(0, n, arr);
    return 0;
}
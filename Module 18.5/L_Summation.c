#include <stdio.h>
#include <string.h>
#include <math.h>
long long int fun(long long int *arr, long long int n,long long int i)
{
    if (i<n)
    {
        long long int l = arr[i] + fun(arr, n, i + 1);
        return l;
    }
    return 0;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int l = fun(arr, n, 0);
    printf("%lld", l);
    return 0;
}
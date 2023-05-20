#include <stdio.h>
#include <string.h>
#include <math.h>

void fun(long long int a)
{
    if (a == 0)
        return;
    long long int r = a / 10, p = a % 10;
    fun(r);
    printf("%lld ", p);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fun(arr[i]);
        if(arr[i]==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
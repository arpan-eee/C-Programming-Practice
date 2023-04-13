#include <stdio.h>
int main()
{
    long long int a, sum = 0;
    scanf("%lld", &a);
    long long int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    if (sum < 0)
    {
        printf("%lld", -sum);
    }
    else if(sum>0)
    {
        printf("%lld", sum);
    }
    else if(sum>0)
    {
        printf(0);
    }
}
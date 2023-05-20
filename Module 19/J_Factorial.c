#include <stdio.h>
#include <string.h>
#include <math.h>
long long int fun(long long int n)
{
    if (n == 1)
        return 1;
    long long int f = n * fun(n - 1);
    return f;
}
int main()
{
    long long int n, factorial;
    scanf("%lld", &n);
    if (n == 0)
    {
        factorial = 1;
    }
    else
    {
        factorial = fun(n);
    }
    printf("%lld", factorial);
    return 0;
}
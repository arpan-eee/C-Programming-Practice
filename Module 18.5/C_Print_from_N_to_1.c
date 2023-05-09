#include <stdio.h>
#include <string.h>
#include <math.h>
void fun(int n, int i)
{
    if (i == n)
    {
        return;
    }
    i++;
    fun(n, i);
    if (i != n)
        printf(" ");
    printf("%d", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 0);
    return 0;
}
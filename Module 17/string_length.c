#include <stdio.h>
#include <string.h>
#include <math.h>
int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = fun(a, i + 1);
    return l + 1;
}
int main()
{
    char a[60] = "ArpanArpan";
    int l = fun(a, 0);
    printf("%d", l);
    return 0;
}
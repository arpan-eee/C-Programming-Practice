#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == c && a == b && a > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a, f;
    scanf("%d", &a);
    if (a > 999 && a <= 9999)
    {
        f = (a - (a % 1000))/1000;
        if (f % 2 == 0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    return 0;
}
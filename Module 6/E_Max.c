#include <stdio.h>
int main()
{
    int n, v, max=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if (v > max)
        {
            max = v;
        }
    }
    printf("%d", max);
    return 0;
}
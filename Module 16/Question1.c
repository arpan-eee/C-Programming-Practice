#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, k = 1, s;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i < n )
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
    }
    return 0;
}
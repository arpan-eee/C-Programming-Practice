#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            if (i % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        k+=2;
    }
    return 0;
}
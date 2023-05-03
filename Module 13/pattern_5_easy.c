#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, sp, st;
    scanf("%d", &n);
    sp = n - 1;
    st = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("* ");
        }
        printf("\n");
        if (i < n)
        {
            sp--;
            st += 2;
        }
        else
        {
            sp++;
            st -= 2;
        }
    }
    return 0;
}
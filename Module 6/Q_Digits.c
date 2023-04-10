#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        for (;;)
        {
            // int d = m - m / 10 * 10 ;
            int d = m % 10 ;
            printf("%d ", d);
            m = m / 10;
            if (m == 0)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b = 1;
    c = 2 * a - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        for (int j = c; j >= 1; j--)
        {
            printf("*");
        }
        c -= 2;
        b++;
        printf("\n");
    }
    return 0;
}
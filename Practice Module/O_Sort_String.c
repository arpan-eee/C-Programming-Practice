#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    getchar();
    char a[100];
    fgets(a, sizeof(a), stdin);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%s", a);

    return 0;
}
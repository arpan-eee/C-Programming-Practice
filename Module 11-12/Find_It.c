#include <stdio.h>
#include <string.h>
int main()
{
    int n, p;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &p);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == p)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
int fun(char a[], int i)
{
    if (i == strlen(a))
    {
        return 0;
    }
    else if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
        int count = 1 + fun(a, i + 1);
        return count;
    }
    else
    {
        int count = fun(a, i + 1);
        return count;
    }
}
int main()
{
    char a[201];
    fgets(a, 201, stdin);
    // printf("%d",strlen(a));
    int count = fun(a, 0);
    printf("%d",count);
    return 0;
}
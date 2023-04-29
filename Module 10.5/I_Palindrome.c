#include <stdio.h>
#include <string.h>
int main()
{
    int count=0;
    char a[1001];
    scanf("%s", &a);
    char rev[1001];
    for (int i = 0; i < strlen(a)/2; i++)
    {
        if (a[strlen(a) - i - 1] != a[i])
        {
            count++;
            break;
        }
    }
    if (count>0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
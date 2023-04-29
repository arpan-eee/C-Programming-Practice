#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[1001];
    int u=0, l=0;
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            u++;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            l++;
        }
    }
    printf("%d %d",u,l);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);

    int cnt[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int val = str[i] - 'A';
            cnt[val]++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            int val = str[i] - 'a';
            cnt[val]++;
        }
    }
    // for (int i = 0; i <= 25; i++)
    // {
    //     if (cnt[i] != 0)
    //     {
    //         printf("%c-%d\n", i + 'A', cnt[i]);
    //     }
    // }
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int val = str[i] - 'A';
            if (cnt[val] != 0)
            {
                printf("%c-%d\n", val + 'A', cnt[val]);
            }
            cnt[val] = 0;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            int val = str[i] - 'a';
            if (cnt[val] != 0)
            {
                printf("%c-%d\n", val + 'A', cnt[val]);
            }
            cnt[val] = 0;
        }
    }

    return 0;
}
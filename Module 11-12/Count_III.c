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
    for (int i = 0; i <= 25; i++)
    {

        printf("%c - %d\n", i + 'a', cnt[i]);
    }
    return 0;
}
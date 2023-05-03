#include <stdio.h>
#include <string.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m];
    int cnt[n + 1] ;
    for (int i = 0; i <= n; i++)
    {
        cnt[i] =0;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }
    // for(int i=0;i<m;i++)
    // {
    //     cnt[arr[i]]++;
    // }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", cnt[i]);
    }
    return 0;
}
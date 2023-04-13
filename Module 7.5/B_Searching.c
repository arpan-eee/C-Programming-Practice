#include <stdio.h>
int main()
{
    int n, test,k=-1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &test);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == test)
        {
            printf("%d", j);
            k=1;
            break;
        }
        
    }
    if(k==-1){
        printf("%d", k);
    }
}
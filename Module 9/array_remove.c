#include<stdio.h>
int main()
{
    int n,nrmv;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &nrmv);
    for(int i=nrmv;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
}
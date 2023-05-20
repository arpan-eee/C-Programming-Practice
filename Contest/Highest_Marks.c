#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int h=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]>h)
        {
            h=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",h-arr[i]);
    }
    return 0;
}
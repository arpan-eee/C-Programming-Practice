#include<stdio.h>
int main()
{
    int n,l_value,s_value,l_index,s_index;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l_value=arr[0];
    s_value=arr[0];
    l_index=0;
    s_index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<s_value)
        {
            s_value=arr[i];
            s_index=i;
        }
        if(arr[i]>l_value)
        {
            l_value=arr[i];
            l_index=i;
        }
    }
    arr[s_index]=l_value;
    arr[l_index]=s_value;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
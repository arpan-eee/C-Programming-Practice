#include <stdio.h>
#include <string.h>
#include <math.h>
void search(int j)
{
    int n,flag=0,pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int demo;
    scanf("%d",&demo);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==demo)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("Case %d: %d\n",j+1,pos+1);
    }
    else
    {
        printf("Case %d: Not Found\n",j+1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        search(i);
    }
    return 0;
}
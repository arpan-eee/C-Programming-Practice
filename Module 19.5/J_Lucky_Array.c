#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==min)
        {
            count++;
        }
    }
    if(count%2==1)
    {
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }

}
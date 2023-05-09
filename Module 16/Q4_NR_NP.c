#include <stdio.h>
#include <string.h>
#include <math.h>
void descending_of_array()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i] < arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}
int main()
{
    descending_of_array();
    return 0;
}
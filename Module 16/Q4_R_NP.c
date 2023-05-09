#include <stdio.h>
#include <string.h>
#include <math.h>
int largest_of_array()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    int l = arr[0] ;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    return l;
}
int main()
{
    int largest = largest_of_array();
    printf("Largest = %d\n", largest);
    return 0;
}
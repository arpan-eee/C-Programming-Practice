#include <stdio.h>
#include <string.h>
#include <math.h>
void smallest_of_array(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    int s = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < s)
        {
            s = arr[i];
        }
    }
     printf("Smallest = %d\n", s);
}
int main()
{
    int n;
    scanf("%d", &n);
    smallest_of_array(n);
    return 0;
}
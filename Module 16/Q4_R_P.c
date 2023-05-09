#include <stdio.h>
#include <string.h>
#include <math.h>
int sum_of_array(int n)
{
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int sum = sum_of_array(n);
    printf("Sum = %d\n", sum);
    return 0;
}
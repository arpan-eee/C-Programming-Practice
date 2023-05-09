#include <stdio.h>
#include <string.h>
#include <math.h>
void fun(int *arr, int n)
{
    *(arr+3)=500; 
    // arr[3]=500;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    fun(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(arr + i));
    }
    return 0;
}
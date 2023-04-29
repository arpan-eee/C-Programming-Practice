#include <stdio.h>
int main()
{
    char arr[5];
    printf("%d\n ",sizeof(arr));
    int arr2[5];
    printf("%d\n\n",sizeof(arr2));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long long int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &arr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c",arr[i]);
    // }
}
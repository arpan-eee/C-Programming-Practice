#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int c=strcmp(a,b);
    printf("%d",c);
    // for (int i = 0;; i++)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("A=B");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("A>B");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A<B");
    //         break;
    //     }
    //     if(a[i]>b[i])
    //     {
    //         printf("A>B");
    //         break;
    //     }
    //     else if(a[i]<b[i])
    //     {
    //         printf("B>A");
    //         break;
    //     }
    // }
    return 0;
}
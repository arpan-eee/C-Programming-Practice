#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        for(int i=1;i<=a;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
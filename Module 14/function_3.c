#include<stdio.h>
#include<string.h>
void sum(int a,int b)
{
    printf("%d\n",a+b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    scanf("%d %d",&a,&b);
    sum(a,b);
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
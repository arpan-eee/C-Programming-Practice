#include<stdio.h>
#include<string.h>
#include<math.h>
void fun(int n, int i)
{
    printf("%d\n",i);
    if(i==n)
    {
        return;
    }
    i++;
    fun(n,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}
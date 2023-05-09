#include<stdio.h>
#include<string.h>
#include<math.h>
int fun(int i)
{
    printf("%d\n",i);
    if(i==5) return 0;
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}
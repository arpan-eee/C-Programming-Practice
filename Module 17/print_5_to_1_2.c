#include<stdio.h>
#include<string.h>
#include<math.h>
int fun(int i)
{
    if(i==11) return 0;
    fun(i+1);
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}
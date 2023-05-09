#include<stdio.h>
#include<string.h>
#include<math.h>
void fun(int *x)
{
    printf("%p\n",x);
    *x=100;
}
int main()
{
    int x=10;
    printf("%p\n",&x);
    fun(&x);
    printf("%d\n",x);
    return 0;
}
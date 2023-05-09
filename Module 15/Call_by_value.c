#include<stdio.h>
#include<string.h>
#include<math.h>
void fun(int x)
{
    printf("%p\n",&x);//x er memory main theke alada
    x=100;//function e x er man change hocche
}
int main()
{
    int x=10;
    printf("%p\n",&x);
    fun(x);
    printf("%d\n",x);//main e change hocche na
    return 0;
}
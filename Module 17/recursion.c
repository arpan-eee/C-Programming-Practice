#include<stdio.h>
#include<string.h>
#include<math.h>
void fun()
{
    printf("Fun\n");
    fun();  
}
int main()
{
    fun();
    return 0;
}
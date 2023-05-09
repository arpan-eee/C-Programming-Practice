#include <stdio.h>
#include <string.h>
#include <math.h>
void fun(int *a, int *b)
{
    int sum = *a + *b;
    printf("%d", sum);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    fun(&a, &b);
    return 0;
}
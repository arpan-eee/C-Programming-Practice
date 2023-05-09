#include <stdio.h>
#include <string.h>
#include <math.h>

void fun(int *ar)
{
    printf("%d\n", strlen(ar));
    printf("%c\n", *(ar));//    ERROR ERROR ERROR !!!!
}

int main()
{
    char ar[] = "hellopendrive";
    int sz = sizeof(ar) / sizeof(char);
    printf("%d\n", sz);
    fun(ar);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    printf("%d",strlen(a));
    // int count=0;
    // for(int i=0;a[i]!='\0';i++)
    // {
    //     count++;
    // }
    // printf("%d",count);
    return 0;
}
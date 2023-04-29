#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    gets(a);
    int count=0;
    for(int i=0;i<strlen(a);i++)
    {
        int b=a[i]-'0';
        count=count+b;
    }
    printf("%d",count);
    return 0;
}
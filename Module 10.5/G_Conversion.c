#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==',')
        {
            printf(" ");
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            printf("%c",a[i]-32);
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            printf("%c",a[i]+32);
        }
    }
    return 0;
}
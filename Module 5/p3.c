#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>=65&&a<=90)
    {
        printf("%c",a+32);
    }
    else if(a>=97&&a<=122)//(a>='a'&&a<='z')
    {
        printf("%c",a-32);
    }
    
    return 0;
}
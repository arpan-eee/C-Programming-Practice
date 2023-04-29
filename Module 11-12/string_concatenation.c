#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    strcat(a,b);
    // for(int i=strlen(b),j=0;j<=strlen(b);i++,j++)
    // {
    //     a[i]=b[j];
    // }
    printf("%s",a);
    return 0;
}
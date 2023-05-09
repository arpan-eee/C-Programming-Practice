#include <stdio.h>
#include <string.h>
int is_palindrome(char a[])
{
    int count=0;
    char rev[1001];
    for (int i = 0; i < strlen(a)/2; i++)
    {
        if (a[strlen(a) - i - 1] != a[i])
        {
            count++;
            break;
        }
    }
    if (count>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char a[1001];
    scanf("%s", &a);
    int flag = is_palindrome(a);
    if(flag==1)
    {
        printf("Palindrome");
    }
    else if(flag==0)
    {
        printf("Not Palindrome");
    }
    return 0;
}
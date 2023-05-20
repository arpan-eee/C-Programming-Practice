#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c==0)
    {
        if(b%c==0)
        {
            printf("Both");
        }
        else
        {
            printf("Memo");
        }
    }
    else if(b%c==0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    return 0;
}
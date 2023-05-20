#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[1001];
    int cp=0,sm=0,sp=0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            cp++;
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            sm++;
        }
        else if(a[i]==' ')
        {
            sp++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",cp,sm,sp);
    return 0;
}
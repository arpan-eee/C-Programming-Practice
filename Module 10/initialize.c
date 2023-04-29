#include<stdio.h>
int main()
{
    // char a[5]={'a','r','p','a','n'};
    char a[]="arpan\0";
    printf("%d\n",sizeof(a));
    // for(int i=0;i<5;i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    printf("%s",a);
}

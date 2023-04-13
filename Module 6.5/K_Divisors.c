#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    if(n!=1){
            printf("%d",n);
        }
    
}
int main()
{
    int i,sum,n;
    sum=0;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum is %d", sum);
}
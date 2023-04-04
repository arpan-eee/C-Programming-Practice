int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i%2==0 )
        {
            printf("%d is Even\n",i);
        }
        else if(i%2==1)
        {
            printf("%d is Odd\n",i);
        }
        else{
            printf("Error");
        }
    }
}
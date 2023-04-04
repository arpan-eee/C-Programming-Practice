int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Before %d\n", i);
        if (i==5)
        {
            break;
        }
        printf("After %d\n", i);
    }
}
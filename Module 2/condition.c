#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        if (tk>=1000)
        {
            printf("buffet khabo");
        }
        else
        {
            printf("burger khabo");
        }
        
    }
    else if (tk>=50)
    {
        printf("Fuchka Khabo");
    }
    
    else
    {
        printf("kisui khabo na");
    }

    return 0;
}
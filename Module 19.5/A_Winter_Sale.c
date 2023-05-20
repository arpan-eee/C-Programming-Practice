#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    float r, p;
    scanf("%f %f", &r, &p);
    printf("%.2f", p / (100 - r)*100);
    return 0;
}
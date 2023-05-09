#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    // Pointer takes space of 4 byte
    double y=100.50;   
    double *ptr2=&y;
    printf("%.2lf\n",*ptr2);

    *ptr = 50;// dereference * diye kore 
    printf("%p\n", &x);   // x er address
    printf("%p\n", ptr);  // ptr er value
    printf("%p\n", &ptr); // ptr er address
    printf("%d\n", x);    // x er value
    printf("%d\n", *ptr); // x er value - dereference
    return 0;
}
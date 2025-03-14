#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("x = ");
    scanf("%lf",&x);
    printf("x mu 2 bang %.2lf\n",x*x);
    printf("x mu 3 bang %.2lf\n",pow(x,3));
    printf("x mu 4 bang %.2lf",pow(x,4));
    return 0;
}
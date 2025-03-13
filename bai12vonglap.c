#include <stdio.h>
#include <math.h>

long long gt(int num)
{
    long long tich = 1;
    for (int i = 1; i <= num; i++)
    {
        tich = tich * i;
    }
    return tich;
}

int main()
{
    float x, eps, sinx;
    printf("Nhap x(rad) va eps: ");
    scanf("%f %f", &x ,&eps);
    int n = 0;
    sinx = 0;
    while ((pow(x, 2*n + 1) / gt(2*n + 1)) > eps)
    {
        sinx += pow(-1, n) * (pow(x, 2*n + 1) / gt(2*n + 1));
        n += 1;
    }
    printf("Voi x = %f, eps = %f thi sin(x) = %f", x, eps, sinx);
    return 0;
}
#include <stdio.h>
#include <math.h>

int ucln(long long num1, long long num2)
{
    while (num2 != 0)
    {
        int du = num1 % num2;
        num1 = num2;
        num2 = du;
    }
    return num1;
}
int main()
{
    long long a, b, min, max;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%lld %lld", &a, &b);
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
    {
        printf("Error");
    }
    
    printf("%lld", a);
    return 0;
}
#include <stdio.h>

long long gt(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return (x * gt(x - 1));
}

int main()
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("x phai lon hon hoac bang khong");
    }
    else
    {
        printf("%d! = %lld", x, gt(x));
    }
    return 0;
}
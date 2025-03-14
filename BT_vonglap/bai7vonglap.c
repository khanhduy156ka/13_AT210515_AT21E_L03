#include <stdio.h>

int main()
{
    int n;
    float sum;
    sum = 0;
    printf("Nhap so N: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += 1.0/i;
        }
        printf("Tong 1 + 1/2 + 1/3 + ... + 1/N = %f", sum);
    }
    else
    {
        printf("N phai lon hon 0");
    }
    return 0;
}
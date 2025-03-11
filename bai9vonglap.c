#include <stdio.h>

int giaithua(int n)
{
    long long tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich = tich * i;
    }
    return tich;
}

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
    }
    else if (n == 0)
    {
        printf("1/0! = 1");
    } 
    else
    {
        float sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += 1.0/giaithua(i);
        }
        printf("Tong 1 + 1/2! + 1/3! + ... + 1/n! = %f", sum);
    }
}
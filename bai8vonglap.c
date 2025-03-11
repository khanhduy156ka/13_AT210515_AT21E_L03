#include <stdio.h>

int main()
{
    int n;
    long long tich = 1;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
    }
    else if (n == 0)
    {
        printf("0! = 1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            tich = tich * i;
        }
        printf("%d! = %lld", n, tich);
    }
    return 0;
}
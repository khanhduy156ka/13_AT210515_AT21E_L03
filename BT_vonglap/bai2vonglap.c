#include <stdio.h>
#include <math.h>

int main()
{
    long long a;
    do
    {
        printf("Nhap so: ");
        scanf("%lld", &a);
        if (a < 0)
        {
            printf("So am khong phai so nguyen to\n");
        }
    }
    while (a < 0);
    if (a <= 1)
    {
        printf("Is not prime");
    }
    else
    {
        int count = 0;
        for (long long i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                printf("Is not Prime");
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("Is prime");
        }
    }
    return 0;
}
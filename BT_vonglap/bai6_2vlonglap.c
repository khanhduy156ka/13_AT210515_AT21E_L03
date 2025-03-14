#include <stdio.h>
#include <math.h>

int main()
{
    long long num;
    printf("Nhap so: ");
    scanf("%lld", &num);
    if (num <= 5)
    {
        printf("%lld khong phai so hoan hao", num);
    }
    else
    {
        long long sum = 0;
        for (int i = 1; i <= sqrt(num); i++)
        {
            if ((num % i) == 0)
            {
                sum = sum + i;
                if (i != (num / i))
                {
                    sum += num / i;
                }
            }
        }
        if (sum == 2 * num)
        {
            printf("%lld la so hoan hao", num);
        }
        else
        {
            printf("%lld khong phai so hoan hao", num);
        }
    }
    return 0;
}
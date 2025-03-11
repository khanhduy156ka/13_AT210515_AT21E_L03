#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Nhap so: ");
    scanf("%lld", &num);
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("%d %d %d %d", i, (num / i), -i, -(num /i));
            printf("\n");
        }
    }
    return 0;
}
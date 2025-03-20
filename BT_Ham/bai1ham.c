#include <stdio.h>
#include <math.h>

double ham_mu(int x, int y)
{
    double tich = 1;
    if (y == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= abs(y); i++)
        {
            tich = tich * x;
        }
        if (y > 0)
        {
            return tich;
        }
        else
        {
            return (1 / tich);
        }
    }
}
int main()
{
    int x, y;
    printf("Nhap x va y: ");
    scanf("%d %d", &x, &y);
    printf("%d mu %d bang: %g", x, y, ham_mu(x, y));
    return 0;
}
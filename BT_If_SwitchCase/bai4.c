#include <stdio.h>

int main()
{
    double r;
    printf("R = ");
    scanf("%lf", &r);
    if (r < 0)
    {
        printf("Ban kinh phai >= 0");
    }
    else
    {
        printf("Dien tich hinh cau: %.2lf π\n",4 * r*r);
        printf("The tich hinh cau la: %.2lf π", 4 * 1.0 / 3 * r*r*r);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, denta;
    printf("Nhap cac he so a, b, c cua pt bac 2: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0) {
        if(b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem");
            } 
            else {
                printf("Phuong trinh vo nghiem");
            }
        } 
        else {
            if (c==0)
            {
                printf("Phuong trinh co nghiem x = 0");
            }
            else
            {
                printf("Phuong trinh co nghiem x = %0.2f",-c / b);  
            }
        }
    }
    else
    {
        denta = pow(b, 2) - 4 * a * c;
        if (denta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (denta == 0)
        {
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2lf", -b / (2*a));
        }
        else
        {
            if ((a + b + c) == 0)
            {
                printf("Phuong trinh co 2 nghiem: x1 = 1 va x2 = %.2lf", c / a);
            } 
            else if ((a - b + c) == 0)
            {
                printf("Phuong trinh co 2 nghiem: x1 = -1 va x2 = %.2lf", -c / a);
            }
            else
            {
                double x1 = (-b + sqrt(denta)) / (2*a);
                double x2 = c / (a * x1);
                printf("Phuong trinh co 2 nghiem: x1 = %.2lf va x2 = %.2lf", x1, x2);
            }
        }
    }
    return 0; 
}  
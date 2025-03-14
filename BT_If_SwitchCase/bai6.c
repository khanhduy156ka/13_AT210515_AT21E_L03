#include <stdio.h>
 
int main()
 {
    double a, b, c, d, e, f, heso, x, y;
    printf("Nhap a,b,c,d,e,f: ");
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    double det = a*e - b*d;
    double detx = c*e - b*f;
    double dety = a*f - c*d;
    if (det != 0)
    {
        printf("He phuong trinh co nghiem duy nhat la x = %.2lf va y = %.2lf", (detx / det), (dety / det)); 
    }
    else
    {
        if (detx != 0 || dety != 0)
        {
            printf("He phuong trinh vo nghiem");
        }
        if (detx == 0 && dety == 0)
        {
            if (((a == 0 && b == 0) && c != 0) || ((d == 0 && e ==0) && f != 0))
            {
                printf("He phuong trinh vo nghiem");
            }
            if ((a*e == b*d) && (b*f == c*e) && (a*f == c*d))
            {
                printf("He phuong trinh vo so nghiem");
            }
        } 
    }
    return 0;
 }
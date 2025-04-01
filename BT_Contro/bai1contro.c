#include <stdio.h>

int main()
{
    float a, b;
    printf("Nhap a va b: ");
    scanf("%f %f", &a, &b);
    float *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;
    float temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    printf("Gia tri cua a va b sau khi hoan doi la: %g va %g", *ptra, *ptrb);
    return 0;
}
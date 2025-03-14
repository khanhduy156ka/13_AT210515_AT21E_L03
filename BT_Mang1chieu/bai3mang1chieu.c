#include <stdio.h>

int main()
{
    int sum = 0, sump = 0, summ = 0, demp = 0, demm = 0;
    int n;
    printf("Mang cua ban co bao nhieu phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] > 0)
        {
            sump += a[i];
            demp ++;
        }
        if (a[i] < 0)
        {
            summ += a[i];
            demm ++;
        }
    }
    printf("Tong cac phan tu cua mang la: %d\n", sum);
    printf("Tong cac so nguyen duong cua mang la: %d\n", sump);
    printf("Tong cac so nguyen am cua mang la: %d\n", summ);
    printf("Trung binh cong cac phan tu cua mang la: %.2f\n", sum * 1.0 / n);
    if (demp != 0)
    {
        printf("Trung binh cong cac so nguyen duong cua mang la: %.2f\n", sump * 1.0 / demp);
    }
    else
    {
        printf("Mang khong co so nguyen duong\n");
    }
    if (demm != 0)
    {
        printf("Trung binh cong cac so nguyen am cua mang la: %.2f", summ * 1.0 / demm);
    }
    else
    {
        printf("Mang khong co so nguyen am");
    }
    return 0;
}
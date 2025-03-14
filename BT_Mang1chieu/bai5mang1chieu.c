#include <stdio.h>

int main()
{
    int n, dem = 0;
    printf("Mang cua ban co bao nhieu phan tu: ");
    scanf("%d", &n);
    float x, a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
    printf("Nhap vao so x: ");
    scanf("%f", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }
    printf("Phan tu x xuat hien %d lan trong mang", dem);
    return 0;
}    
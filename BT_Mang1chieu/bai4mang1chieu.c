#include <stdio.h>

int main()
{
    int n;
    printf("Mang cua ban co bao nhieu phan tu: ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
    float max =  a[0];
    float min =  a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Phan tu be nhat cua mang la ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            printf("a[%d] ");
        }
    }
    printf("= %g\n", min);
    printf("Phan tu lon nhat cua mang la ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            printf("a[%d] ");
        }
    }
    printf("= %g", max);
    return 0;
}    
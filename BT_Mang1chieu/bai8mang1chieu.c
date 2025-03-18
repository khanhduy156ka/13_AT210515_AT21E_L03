/// Ghep 2 mang da sap xep theo chieu tang dan
#include <stdio.h>

int main()
{
    int n, m;
    printf("Mang 1 co bao nhieu phan tu: ");
    scanf("%d", &n);
    int mang1[n];
    printf("Nhap mang 1 (Sap xep tang dan): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mang1[i]);
    }
    printf("Mang 2 co bao nhieu phan tu: ");
    scanf("%d", &m);
    int mang2[m];
    printf("Nhap mang 2 (Sap xep tang dan): ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &mang2[i]);
    }
    printf("Mang sau khi ghep 2 mang lai voi nhau la: ");
    int i = 0, y = 0;
    while (i < n && y < m)
    {
        if(mang2[y] <= mang1[i])
        {
            printf("%d ", mang2[y]);
            y++;
        }
        else
        {
            printf("%d ", mang1[i]);
            i++;
        }
    }
    if (i == n)
    {
        for (int j = y; j < m; j++)
        {
            printf("%d ",mang2[j]);
        }
    }
    else
    {
        for (int j = i; j < n; j++)
        {
            printf("%d ",mang1[j]);
        }
    }
    return 0;
}
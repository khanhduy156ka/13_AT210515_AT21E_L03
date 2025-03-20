#include <stdio.h>

void in_mang(float mang[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%g ", mang[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float mang1[3][3] = {
        {1,2,3},
        {2,3,4},
        {3,4,5}
    };
    float mang2[3][3];
    printf("Nhap mang 2 (3x3): \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%f", &mang2[i][j]);
        }       
    }
    // TH1: Khai báo sẵn giá trị mảng
    printf("Mang 1: \n");
    in_mang(mang1);
    printf("\n");
    // TH2: Nhập giá trị từ bàn phím
    printf("Mang 2: \n");
    in_mang(mang2);
    return 0;
}

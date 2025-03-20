#include <stdio.h>

void tao_mt(int m, int n, float mt[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &mt[i][j]);
        }
    }
}

void in_mt(int m, int n, float mt[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%g ", mt[i][j]);
        }
        printf("\n");
    }
}

void nhan_mt (int a, int b, int c, int d, float mt1[a][b], float mt2[c][d], float mt[a][d])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            float tong = 0;
            for (int k = 0; k < c; k++)
            {
                tong += mt1[i][k] * mt2[k][j];
            }
            mt[i][j] = tong;
        }
    }    
}       

int main()
{
    int a, b, c, d;
    printf("Nhap kich thuoc ma tran 1 (m1 n1): ");
    scanf("%d %d", &a, &b);
    printf("Nhap kich thuoc ma tran 2 (m2 n2): ");
    scanf("%d %d", &c, &d);
    if (b != c)
    {
        printf("Khong nhan duoc 2 ma tran voi nhau vi n1 khac m2");
    }
    else
    {
        float mt1[a][b];
        float mt2[c][d];
        printf("Nhap ma tran 1: \n");
        tao_mt(a, b, mt1);
        printf("Nhap ma tran 2: \n");
        tao_mt(c, d, mt2);
        printf("\n");
        printf("Ma tran 1: \n");
        in_mt(a, b, mt1);
        printf("\n");
        printf("Ma tran 2: \n");
        in_mt(c, d, mt2);
        printf("\n");
        float mt[a][d];
        nhan_mt(a, b, c, d, mt1, mt2, mt);
        printf("Nhan 2 ma tran voi nhau, ta duoc ma tran: \n");
        in_mt(a, d, mt);
    }
    return 0;
}
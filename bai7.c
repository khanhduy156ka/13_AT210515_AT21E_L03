#include <stdio.h>

int main()
{
    float score;
    printf("Nhap so diem: ");
    scanf("%f", &score);
    if (score >= 0 && score <=10)
    {
        if (score < 5)
        {
            printf("Yếu");
        }
        else if (score < 7)
        {
            printf("TB");
        }
        else if (score < 8)
        {
            printf("Khá");
        }
        else if (score < 9)
        {
            printf("Giỏi");    
        }
        else
        {
            printf("Xuất sắc");
        }
    }
    else
    {
        printf("Error");
    }
    return 0;
}
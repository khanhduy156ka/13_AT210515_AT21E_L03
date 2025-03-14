#include <stdio.h>

int main(){
    int m, y;
    printf("Nhap nam, thang: ");
    scanf("%d %d", &y, &m);
    if ((m > 0) && (m < 13) && y > 0){
        switch(m){
            case 2:
                if (((y % 4 == 0) && (y % 100 !=0)) || y % 400 == 0){
                    printf("Tháng %d năm %d có 29 ngày", m, y);
                }
                else{
                    printf("Tháng %d năm %d có 28 ngày", m, y);
                }
                break;
            case 4: case 6: case 9: case 11:
                printf("Tháng %d năm %d có 30 ngày", m, y);
                
                break;
            default:
                printf("Tháng %d năm %d có 31 ngày", m, y);
            }
        }
    else {
        printf("Input khong hop le");
    }
    return 0;
}

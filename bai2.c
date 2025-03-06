#include <stdio.h>

int main(){
    int m, y, d;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d%d%d", &d, &m, &y);
    if ((d > 0 && d < 32) && (m > 0) && (m < 13) && y > 0){
        if (d < 29){
            printf("Hôm nay là ngày %02d/%02d/%d",d,m,y);
        }
        else{
            switch(m){
                case 2:
                    if ((((y % 4 == 0) && (y % 100 !=0)) || y % 400 == 0) && d < 30){
                        printf("Hôm nay là ngày %02d/%02d/%d",d,m,y);
                    }
                    else{
                        printf("Error");
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    if (d < 31){
                        printf("Hôm nay là ngày %02d/%02d/%d",d,m,y);
                    }
                    else{
                        printf("Error");
                    }
                    break;
                default:
                    printf("Hôm nay là ngày %02d/%02d/%d",d,m,y);
            }
        }
    }
    else {
        printf("Error");
    }
    return 0;
}
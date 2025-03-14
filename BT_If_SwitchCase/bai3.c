#include <stdio.h>

int main(){
    long long a, b;
    char op;
    scanf("%lld%lld ",&a,&b);
    scanf("%c",&op);
    switch(op){
        case '+':
            printf("%lld\n", a + b);
            break;
        case '-':
            printf("%lld\n", a - b);
            break;
        case '*':
            printf("%lld\n", a * b);
            break;
        case '/':
            printf("%lf\n", 1.0 * a / b);
            break;
        default:
            printf("INVALID INPUT");
    }
    return 0;
}
#include <stdio.h>

int main(){
    float d;
    scanf("%f", &d);
    printf("%.3f", (9.0 / 5.0 * d + 32)); // 9.0, 5.0으로 맞춰줘야 함
    return 0;
}
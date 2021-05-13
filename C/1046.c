#include <stdio.h>

int main(){
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    
    long sum = a + b + c;
    
    printf("%d\n", sum);
    printf("%.1f", (float)sum / 3);
    return 0;
}
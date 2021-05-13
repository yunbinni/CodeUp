#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int i = 1;
    
    while(1){
        sum += i;
        if(sum >= n) break;
        i++;
    }
    
    printf("%d", i);
    
    return 0;
}
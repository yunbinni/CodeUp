#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    
    if(a < 0) printf("minus\n");
    else printf("plus\n");
    
    if(a%2==0) printf("even");
    else printf("odd");
    
    return 0;
}
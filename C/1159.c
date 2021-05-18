#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(50 <= n && n <= 70 || n%6==0) printf("win");
    else printf("lose");
    return 0;
}
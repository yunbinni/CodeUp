#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(30 <= n && n <= 40 || 60 <= n && n <= 70) printf("win"); // and�� or���� �켱
    else printf("lose");
    return 0;
}
#include <stdio.h>

int main(){
    int n, m;
    
    int count = 0;
    
    scanf("%d", &n);
    
    reload:
    count++;
    scanf("%d", &m);
    printf("%d\n", m);
    if(count != n) goto reload;
    
    return 0;
}
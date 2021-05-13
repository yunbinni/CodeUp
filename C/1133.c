#include <stdio.h>

int main(){
    char x[31];
    fgets(x, 31, stdin);
    printf("%s", x);
    return 0;
}
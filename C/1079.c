#include <stdio.h>

int main(){
    char x;
    reload:
    scanf("%c", &x);
    printf("%c", x);
    if(x != 'q') goto reload;
    return 0;
}
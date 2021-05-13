#include <stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    
    int i = 97;
    do{
    	printf("%c ", i);
    	i++;
	} while((int)x >= i);
    return 0;
}
#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	long int count = 1;
	
	while(count%a!=0 || count%b!=0 || count%c!=0) count++;
	
	printf("%d", count);
	
    return 0;
}
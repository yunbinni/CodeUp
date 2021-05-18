#include <stdio.h>

int main(){
	int rcb;
	scanf("%d", &rcb);
	
	int ten = rcb%10;
	int one = rcb/10;
	
	int res = (10*ten + one)*2;
	if(res >= 100) res = res - 100;
	
	printf("%d\n", res);
	
	if(res <= 50) printf("GOOD");
	else printf("OH MY GOD");
	
	return 0;
}
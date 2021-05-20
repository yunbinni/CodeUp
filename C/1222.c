#include <stdio.h>

int main(){
	int time, a, b;
	scanf("%d %d %d", &time, &a, &b);
	
	for(int i = time; i < 90; i+=5){
		a++;
	}
	
	if(a > b) printf("win");
	else if(a < b) printf("lose");
	else printf("same");
	
	return 0;
}
#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	
	for(int i = a; i <= b; i++){
		if(i%2!=0){
			sum += i;
			printf("+%d", i);
		} else{
			sum -= i;
			printf("-%d", i);
		}
	}
	
	printf("=%d", sum);
	
	return 0;
}
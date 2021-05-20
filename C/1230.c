#include <stdio.h>

int main(){
	int tunnel[3];
	for(int i = 0; i < 3; i++){
		scanf("%d", &tunnel[i]);
	}
	
	for(int i = 0; i < 3; i++){
		if(tunnel[i] <= 170){
			 printf("CRASH %d", tunnel[i]);
			 break;
		}
	}
	
	if(tunnel[0] > 170 && tunnel[1] > 170 && tunnel[2] > 170){
		printf("PASS");
	}
	
	return 0;
}
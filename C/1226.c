#include <stdio.h>

int main(){
	int repArr[6], bonus, myArr[6], count = 0, isSec = 0;
	
	for(int i = 0; i < 6; i++){
		scanf("%d", &repArr[i]);
	}
	
	scanf("%d", &bonus);
	
	for(int i = 0; i < 6; i++){
		scanf("%d", &myArr[i]);
	}
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(repArr[i]==myArr[j]){
				count++;
				continue;
			}
		}
	}
	
	if(count==5){
		for(int i = 0; i < 6; i++){
			if(bonus==myArr[i]){
				isSec = 1;
				break;
			}
		}
	}
	
	switch(count){
		case 6:
			printf("%d", 1);
			break;
		case 5:
			if(isSec) printf("%d", 2);
			else printf("%d", 3);
			break;
		case 4:
			printf("%d", 4);
			break;
		case 3:
			printf("%d", 5);
			break;
		default:
			printf("%d", 0);
			break;		
	}
	
	return 0;
}
#include <stdio.h>

int main(){
    int car[3], s;
    scanf("%d %d %d", &car[0], &car[1], &car[2]);
    
    for(int i = 0; i < 3; i++){
    	s = 1;
    	if(car[i]<=170){
    		s = 0;
    		break;
		}
	}
	
	if(s) printf("PASS");
	else printf("CRASH");
	return 0;
}
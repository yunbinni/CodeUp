#include <stdio.h>

int main(){
    int min, score;
    scanf("%d %d", &min, &score);
    
    while(min < 90){
    	min += 5;
    	score++;
	}
	printf("%d", score);
	return 0;
}
#include <stdio.h>

int main(){
	int y, m;
	scanf("%d %d", &y, &m);
	
	int mArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if(m==2){
		if(y%400==0 || y%4==0 && y%100!=0) printf("%d", 29);
		else printf("%d", 28);
	} else{
		printf("%d", mArr[m - 1]);
	}
    return 0;
}
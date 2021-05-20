#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a + b > c && a + c > b && b + c > a){
		if(a==b && b==c) printf("정삼각형");
		else if(a==b || b==c || a==c) printf("이등변삼각형");
		else if(pow(a, 2) + pow(b, 2) == pow(c, 2)) printf("직각삼각형");
		else printf("삼각형");
	} else{
		printf("삼각형아님");
	}
	
	return 0;
}
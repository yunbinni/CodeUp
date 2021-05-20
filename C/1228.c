#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	
	double std = (a - 100) * 0.9;
	double bimando = (b - std) * 100 / std;
	
	if(bimando <= 10) printf("정상");
	else if(bimando <= 20) printf("과체중");
	else printf("비만");
	
	return 0;
}
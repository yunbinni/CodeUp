#include <stdio.h>

int main(){
	int a, b;
	char oper;
	scanf("%d%c%d", &a, &oper, &b);
	
	if(oper == '+') printf("%d", a+b);
	if(oper == '-') printf("%d", a-b);
	if(oper == '*') printf("%d", a*b);
	if(oper == '/') printf("%.2f", (float)a/b);
	
	return 0;
}
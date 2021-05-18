#include <stdio.h>

int main(){
	int age;
	scanf("%d", &age);
	int bYear = 2012 - age + 1;
	if(bYear < 2000) printf("%d %d", bYear - 1900, 1);
	else printf("%d %d", bYear - 2000, 3);
	return 0;
}
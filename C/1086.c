#include <stdio.h>

int main(){
    int w, h, b;
	scanf("%d %d %d", &w, &h, &b);
	
	double MB = w*h*b;
	
	printf("%.2f MB", MB/(8*1024*1024));
    return 0;
}
#include <stdio.h>
#include <stdlib.h> 

int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	float res = (float)a;
	float net;
	
	int *per = (int *)malloc(sizeof(int) * b);
	for(int i = 0; i < b; i++){
		scanf("%d", &per[i]);
	}
	
	for(int i = 0; i < b; i++){
		res = res + res*(per[i]/(float)100);
	}
	
	net = res - a;
	
	printf("%.0f\n", net);
	
	if(-0.5 < net && net < 0.5) printf("same");
	else if(net >= 0.5) printf("good");
	else if(net <= -0.5) printf("bad");
	
	return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
	int n, k = 0;
	scanf("%d", &n);
	
	for(int i = n; i > 0; i--){
		double t = sqrt((double)i);
		
		if(t - (int)t == 0){
			printf("%d %.0f\n", k, t);
			break;
		} else{
			k++;
		}
	}
	return 0;
}
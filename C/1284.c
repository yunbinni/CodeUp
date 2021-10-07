#include <stdio.h>

int main(){
	int n, cnt = 0, idx = 0, arr[2];
	scanf("%d", &n);
	
	for(int i = 2; i < n; i++){
		if(n%i==0){
			cnt++;
			
			if(i==2 && idx < 2){
				arr[idx] = i;
				idx++;
			} else if(i%2!=0 && idx < 2){
				arr[idx] = i;
				idx++;
			}
		}
	}
	
	if(cnt==2 && idx==2) printf("%d %d", arr[0], arr[1]);
	else printf("wrong number");
	
	return 0;
}
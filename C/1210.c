#include <stdio.h>

int main(){
    int arr[5] = {400, 340, 170, 100, 70};
    
    int i, j;
    scanf("%d %d", &i, &j);
    
    if(arr[i - 1] + arr[j - 1] > 500) printf("angry");
    else printf("no angry");
    
	return 0;
}
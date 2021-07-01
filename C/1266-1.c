// 반복문을 이용한 풀이
#include<stdio.h>
 
int main(){
	int n, temp, sum;
	scanf("%d", &n);
	sum = 0;
	while(n--){
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d", sum);
    return 0;
}
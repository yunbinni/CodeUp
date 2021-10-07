// 배열을 이용한 풀이
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	
	int *arr = (int *)malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	for(int i = 0; i < n; i++) sum += arr[i];
	
	cout << sum;
}
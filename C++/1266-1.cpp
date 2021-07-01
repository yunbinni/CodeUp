// 반복문을 이용한 풀이
#include <iostream>

using namespace std;
 
int main(){
	int n, temp, sum;
	scanf("%d", &n);
	sum = 0;
	while(n--){
		cin >> temp;
		sum += temp;
	}
	cout << sum;
}
// math.h를 이용한 다른 풀이
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int res = pow(n, k); // 이렇게 해줘야 부동소수점으로 표기 안 됨
	cout << res;
}
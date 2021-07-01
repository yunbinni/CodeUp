// 재귀용법을 이용한 다른 풀이
#include <iostream>

using namespace std;

int fac(int n){
	if(n==1) return 1;
	else return n*fac(n - 1);
}

int main(){
	int n;
	cin >> n;
	
	cout << fac(n);
}
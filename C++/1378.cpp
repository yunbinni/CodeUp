#include <iostream>

using namespace std;

int main(){
	int n, sum = 0, res = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		sum = 0;
		for(int j = 1; j <= i; j++){
			sum += j;
		}
		res += sum;
	}
	cout << res;
}
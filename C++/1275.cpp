#include <iostream>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int res = 1;
	for(int i = 0; i < k; i++){
		res *= n;
	}
	cout << res;
}
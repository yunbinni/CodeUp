#include <iostream>

using namespace std;

int main(){
	int a, d, n;
	cin >> a >> d >> n;
	
	int result = a;
	
	for(int i = 1; i < n; i++){
		result += d;
	}
	cout << result;
}
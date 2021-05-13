#include <iostream>

using namespace std;

int main(){
	long int a, r, n;
	cin >> a >> r >> n;
	
	long long int result = a;
	
	for(int i = 1; i < n; i++){
		result *= r;
	}
	printf("%lld", result);
}
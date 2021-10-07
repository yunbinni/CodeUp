#include <iostream>

using namespace std;

int main(){
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	
	for(int i = 0; i < n - 1; i++){
		a = a*b + c;
	}
	
	cout << a;
}
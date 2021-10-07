#include <iostream>

using namespace std;

int main(){
	int n, res = 1;
	cin >> n;
	
	while(n){
		res *= n;
		n--;
	}
	
	cout << res;
}
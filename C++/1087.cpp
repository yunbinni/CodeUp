#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int sum = 0;
	
	for(int i = 1; sum < n; i++){
		sum += i;
	}
	cout << sum;
}
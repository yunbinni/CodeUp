#include <iostream>

using namespace std;

int main(){
	int n, temp, sum = 0;
	cin >> n;
	
	while(n--){
		cin >> temp;
		if(temp%5==0) sum += temp;
	}
	
	cout << sum;
}
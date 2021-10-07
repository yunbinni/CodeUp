#include <iostream>

using namespace std;

int main(){
	int n, temp, cnt = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp%2==0) cnt++;
	}
	
	cout << cnt;
}
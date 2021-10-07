#include <iostream>

using namespace std;

int main(){
	int n, cnt = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(n%i==0) cnt += 1;
	}
	
	if(cnt==2) cout << "prime";
	else cout << "not prime";
}
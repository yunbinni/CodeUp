#include <iostream>

using namespace std;

int main(){
	int n, arr[100], len = 0;
	cin >> n;
	
	if(n==0)
		cout << 0;
	else{
		for(int i = 0;;i++){
			if(n==0) break;
			arr[i] = n%2;
			len++;
			n /= 2;
		}
		for(int j = len - 1; j >= 0; j--)
			cout << arr[j];
	}
}
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	// 상단부
	for(int i = 0; i < n; i++){
		// 1번째 공백
		for(int j = 0; j < n - 1 - i; j++) cout << " ";
		// 1번쨰 별
		cout << "*";
		// 2번째 공백
		for(int j = 0; j < 2*i; j++) cout << " ";
		// 2번째 별
		cout << "*" << endl;
	}
	
	// 하단부
	for(int i = 0; i < n; i++){
		// 1번째 공백
		for(int j = 0; j < i; j++) cout << " ";
		// 1번쨰 별
		cout << "*";
		// 2번째 공백
		for(int j = 0; j < 2*(n-1-i); j++) cout << " ";
		// 2번째 별
		cout << "*" << endl;
	}
}
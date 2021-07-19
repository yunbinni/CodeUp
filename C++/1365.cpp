#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		// 첫째줄 
		if(i==0){
			for(int j = 0; j < n; j++)
				cout << "*";
			cout << endl;
		}
		
		// 2~(n-1)번째줄
		else if(0 < i && i < n-1) {
			for(int j = 0; j < n; j++){
				if(j==0 || j==i || j==n-1-i || j==n-1) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		
		// n번째줄
		else if(i==n-1){
			for(int j = 0; j < n; j++)
				cout << "*";
		}
	}
}
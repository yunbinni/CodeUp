#include <iostream>

using namespace std; 

int main(){
	int h, k;
	char d;
	cin >> h >> k >> d;
	
	for(int i = 0; i < h; i++){
		if(d == 76){ // 아스키 코드 
			for(int j = 0; j < i; j++){
				cout << " ";
			}
			for(int m = 0; m < k; m++){
				cout << "*";
			}
			cout << endl;
		} else{
			for(int j = h - 1 - i; j > 0; j--){
				cout << " ";
			}
			for(int m = 0; m < k; m++){
				cout << "*";
			}
			cout << endl;
		}
	}
}
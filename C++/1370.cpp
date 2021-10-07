#include <iostream>

using namespace std;

int main(){
	int h, r;
	cin >> h >> r;
	
	// 전체 반복 
	for(int i = 0; i < r; i++){
		
		// 부분 반복(상단부) 
		for(int j = 0; j < h; j++){
			// 공백 반복 
			for(int k = 0; k < j; k++){
				cout << " ";
			}
			// 별 찍기
			cout << "*" << endl;
		}
		
		// 부분 반복(하단부)
		for(int j = 0; j < h - 1; j++) {
			// 공백 반복
			for(int k = 0; k < h - j - 2; k++){
				cout << " ";
			}
			// 별 찍기
			cout << "*" << endl;
		}
	}
}
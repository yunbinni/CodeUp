#include <iostream>

using namespace std;

int main(){
    int h, w, n, l, d, x, y;
    
    // 세로, 가로 입력받기
	cin >> h >> w;
	
	// 배열선언(동적할당법은 나중에 공부하자) 
	int arr[100][100];
	
	// 막대기 갯수 입력받기
	cin >> n;
	
	// 막대기 정보 입력받기
	for(int i = 0; i < n; i++){
		cin >> l >> d >> x >> y;
		
		for(int j = 0; j < l; j++){
			if(d==0){
				arr[x-1][y+j-1] = 1;
			}
			else{
				arr[x+j-1][y-1] = 1;
			}
		}
	}
	
	// 출력하기
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
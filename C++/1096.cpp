#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[19][19] = {0, };
	
	int x, y;
	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		arr[x - 1][y - 1] = 1;
	}
	
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19; j++){
			if(arr[i][j] == 1) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}
}
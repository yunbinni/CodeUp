#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[n][n];
	int count = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i%2==0){
				arr[i][n - 1 - j] = count;
				count++;
			} else{
				arr[i][j] = count;
				count++;
			}
		}
		
		for(int k = 0; k < n; k++){
			cout << arr[i][k] << " ";
		}
		cout << endl;
	}
}
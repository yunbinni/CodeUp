#include <iostream>

using namespace std;

int main(){
	int n ; cin >> n;
	
	int arr[100][100];
	
	int count = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i%2==0){
				arr[i][j] = count;
				count++;
			} else{
				arr[i][n - 1 - j] = count;
				count++;
			}
		}
		
		for(int k = 0; k < n; k++){
			cout << arr[i][k] << " ";
		}
		cout << endl;
	}
}

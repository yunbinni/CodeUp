#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		int k = i;
		for(int j = 0; j < n; j++){
			if(k==n) k = 0;
			cout << arr[k] << " ";
			k++;
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	
	cout << arr[k - 1];
}
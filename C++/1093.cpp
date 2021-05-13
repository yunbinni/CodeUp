#include <iostream>

using namespace std;

int main(){
	int arr[23] = {};
	
	int count;
	cin >> count;
	
	int number;
	
	for(int i = 1; i <= count; i++){
		cin >> number;
		arr[number] += 1;
	}
	
	for(int j = 1; j <= sizeof(arr)/4; j++){
		printf("%d ", arr[j]);
	}
}
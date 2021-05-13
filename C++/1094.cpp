#include <iostream>

using namespace std;

int main(){
	int count;
	cin >> count;
	
	int arr[10000];
	
	int number;
	
	for(int i = 0; i < count; i++){
		cin >> arr[i];
	}
	
	for(int j = count; j > 0; j--){
		cout << arr[j-1] << " ";
	}
}
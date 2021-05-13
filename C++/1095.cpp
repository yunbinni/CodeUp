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
	
	int min = 9999;
	
	for(int i = 0; i < count; i++){
		if (min > arr[i]) min = arr[i];
	}
	
	cout << min;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int s = 0;
	int *arr = (int *)malloc(sizeof(int) * 10);
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(arr[i]%5==0){
			cout << arr[i];
			s = 1;
			break;
		}
	}
	if(s==0)
		cout << 0;
}
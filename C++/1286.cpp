#include <iostream>
#include <limits.h>

using namespace std;

int main(){
	int max = INT_MIN;
	int min = INT_MAX;
	int temp;
	
	for(int i = 0; i < 5; i++){
		cin >> temp;
		
		if(temp > max) max = temp;
		if(temp < min) min = temp;
	}
	
	cout << max << endl;
	cout << min;
}
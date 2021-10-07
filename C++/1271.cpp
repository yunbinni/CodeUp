#include <iostream>
#include <limits.h>

using namespace std;

int main(){
	int n, temp;
	cin >> n;
	
	int max = INT_MIN;
	
	while(n--){
		cin >> temp;
		if(temp > max) max = temp;
	}
	
	cout << max;
}
#include <iostream>

using namespace std;

int main(){
	int n, end = 0;
	cin >> n;
	
	for(int i = 0; i < 2*n - 1; i++){
		
		if(i < n) end++;
		else end--;
		
		for(int j = 0; j < end; j++) cout << "*";
		
		cout << endl;
	}
}
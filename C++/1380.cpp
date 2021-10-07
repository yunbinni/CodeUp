#include <iostream>

using namespace std;

int main(){
	int k;
	cin >> k;
	
	for(int i = 1; i <= 6; i++){
		for(int j = 1; j <= 6; j++){
			if(i+j==k) cout << i << " " << j << endl;
		}
	}
}
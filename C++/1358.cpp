#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int end = (n + 1)/2;
	
	for(int i = 0; i < end; i++){
		for(int j = end - 1 - i; j > 0; j--){
			cout << " ";
		}
		for(int k = 0; k < 2*i + 1; k++){
			cout << "*";
		}
		cout << endl;
	}
}
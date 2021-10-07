#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char arr[100000];
	cin >> arr;
	
	int c1 = 0, c2 = 0;
	for(int i = 0; i < strlen(arr); i++){
		switch(arr[i]){
			case '(':
				c1++;
				break;
			case ')':
				c2++;
				break;
		}
	}
	
	cout << c1 << " " << c2;
}
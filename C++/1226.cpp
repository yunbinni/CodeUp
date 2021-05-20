#include <iostream>

using namespace std;

int main(){
	int repArr[6], bonus, myArr[6], count = 0, isSec = 0;
	
	for(int i = 0; i < 6; i++){
		cin >> repArr[i];
	}
	
	cin >> bonus;
	
	for(int i = 0; i < 6; i++){
		cin >> myArr[i];
	}
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(repArr[i]==myArr[j]){
				count++;
				continue;
			}
		}
	}
	
	if(count==5){
		for(int i = 0; i < 6; i++){
			if(bonus==myArr[i]){
				isSec = 1;
				break;
			}
		}
	}
	
	switch(count){
		case 6:
			cout << 1;
			break;
		case 5:
			if(isSec) cout << 2;
			else cout << 3;
			break;
		case 4:
			cout << 4;
			break;
		case 3:
			cout << 5;
			break;
		default:
			cout << 0;
			break;		
	}
}
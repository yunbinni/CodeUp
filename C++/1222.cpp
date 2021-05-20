#include <iostream>

using namespace std;

int main(){
	int time, a, b;
	cin >> time >> a >> b;
	
	for(int i = time; i < 90; i+=5){
		a++;
	}
	
	if(a > b) cout << "win";
	else if(a < b) cout << "lose";
	else cout << "same";
}
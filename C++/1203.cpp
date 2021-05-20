#include <iostream>

using namespace std;

int main(){
	int bmi;
	cin >> bmi;
	
	if(bmi <= 10) cout << "정상";
	else if(bmi <= 20) cout << "과체중";
	else cout << "비만";
}
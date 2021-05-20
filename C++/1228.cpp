#include <iostream>

using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	
	double std = (a - 100) * 0.9;
	double bimando = (b - std) * 100 / std;
	
	if(bimando <= 10) cout << "정상";
	else if(bimando <= 20) cout << "과체중";
	else cout << "비만";
}
#include <iostream>

using namespace std;

int main(){
	double h, w, stdw, bimando;
	cin >> h >> w;
	
	if(h < 150) stdw = h - 100;
	else if(150 <= h && h < 160) stdw = (h - 150)/2 + 50;
	else stdw = (h - 100)*0.9;
	
	bimando = (w - stdw)*100/stdw;
	
	if(bimando <= 10) cout << "정상";
	else if(10 < bimando && bimando <= 20) cout << "과체중";
	else cout << "비만";
}
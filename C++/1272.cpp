#include <iostream>

using namespace std;

int main(){
	int k, h, kMoney = 0, hMoney = 0;
	cin >> k >> h;
	
	if(k%2!=0) kMoney = (k + 1)/2;
	else kMoney = 5*k;
	
	if(h%2!=0) hMoney = (h + 1)/2;
	else hMoney = 5*h;
	
	cout << kMoney + hMoney;
}
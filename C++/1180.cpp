#include <iostream>

using namespace std;

int main(){
	int rcb;
	cin >> rcb;
	
	int ten = rcb%10;
	int one = rcb/10;
	
	int res = (10*ten + one)*2;
	if(res >= 100) res = res - 100;
	
	cout << res << endl;
	
	if(res <= 50) cout << "GOOD";
	else cout << "OH MY GOD";
}
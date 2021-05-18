#include <iostream>

using namespace std;

int main(){
	int h, m;
	cin >> h >> m;
	if(m < 30){
		if(h==0) cout << 23 << " " << m - 30 + 60;
		else cout << h - 1 << " " << m - 30 + 60;
	} else{
		cout << h << " " << m - 30;
	}
}
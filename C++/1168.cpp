#include <iostream>

using namespace std;

int main(){
	int ymd, _;
	cin >> ymd >> _;
	if(_==1 || _==2){
		cout << 2012 - 1900 - ymd/10000 + 1;
	} else{
		cout << 2012 - 2000 - ymd/10000 + 1;
	}
}
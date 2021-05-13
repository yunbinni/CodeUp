#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	long int count = 1;
	
	while(count%a!=0 || count%b!=0 || count%c!=0) count++;
	
	cout << count;
}
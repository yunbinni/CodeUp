#include <iostream>

using namespace std;

int main(){
	int age;
	cin >> age;
	int bYear = 2012 - age + 1;
	if(bYear < 2000) cout << bYear - 1900 << " " << 1;
	else cout << bYear - 2000 << " " << 3;
}
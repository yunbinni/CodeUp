#include <iostream>

using namespace std;

int main(){
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a/b > c/d) cout << ">";
	else if(a/b < c/d) cout << "<";
	else cout << "=";
}
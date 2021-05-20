#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b;
	char oper;
	cin >> a >> oper >> b;
	
	if(oper == '+') cout << a + b;
	if(oper == '-') cout << a - b;
	if(oper == '*') cout << a*b;
	if(oper == '/') cout << fixed << setprecision(2) << float(a)/float(b);
}
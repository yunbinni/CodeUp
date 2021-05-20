#include <iostream> 
#include <math.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a + b > c && a + c > b && b + c > a){
		if(a==b && b==c) cout << "정삼각형";
		else if(a==b || b==c || a==c) cout << "이등변삼각형";
		else if(pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << "직각삼각형";
		else cout << "삼각형";
	} else{
		cout << "삼각형아님";
	}
}
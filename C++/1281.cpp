#include <iostream>

using namespace std;

int main(){
	int a, b, sum = 0;
	cin >> a >> b;
	
	for(int i = a; i <= b; i++){
		if(i==a && i%2!=0){
			cout << i;
			sum += i;
			
		} else if(i==a && i%2==0){
			cout << "-" << i;
			sum -= i;
			
		} else if(i%2!=0){
			cout << "+" << i;
			sum += i;
			
		} else if(i%2==0){
			cout << "-" << i;
			sum -= i;
			
		}
	}
	cout << "=" << sum;
}
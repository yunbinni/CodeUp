#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%10==1 && n!=11){
    	cout << n << "st";
	} else if(n%10==2 && n!=12){
		cout << n << "nd";
	} else if(n%10==3 && n!=13){
		cout << n << "rd";
	} else{
		cout << n << "th";
	}
}
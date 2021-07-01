#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, k = 0;
	cin >> n;
	
	for(int i = n; i > 0; i--){
		double t = sqrt((double)i);
		
		if(t - (int)t == 0){
			printf("%d %.0f\n", k, t);
			break;
		} else{
			k++;
		}
	}
}
#include <iostream>
#include <stdlib.h> 

using namespace std;

int main(){
	int a, b;
	cin >> a;
	cin >> b;
	float res = (float)a;
	float net;
	
	int *per = (int *)malloc(sizeof(int) * b);
	for(int i = 0; i < b; i++){
		cin >> per[i];
	}
	
	for(int i = 0; i < b; i++){
		res = res + res*(per[i]/(float)100);
	}
	
	net = res - a;
	
	printf("%.0f\n", net);
	
	if(-0.5 < net && net < 0.5) cout << "same";
	else if(net >= 0.5) cout << "good";
	else if(net <= -0.5) cout << "bad";
	
	return 0;
}
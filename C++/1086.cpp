#include <iostream>

using namespace std;

int main(){
    int w, h, b;
	cin >> w >> h >> b;
	
	double MB = w*h*b;
	
	printf("%.2f MB", MB/(8*1024*1024));
}
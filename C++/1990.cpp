#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char n[10000];
	cin >> n;
	int sum = 0;
	
	for(int i = 0; i < strlen(n); i++){
		sum += n[i];
	}
	
	if (sum % 3 == 0)
        cout << 1;
    else
        cout << 0;
}
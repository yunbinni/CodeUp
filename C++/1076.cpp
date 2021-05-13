#include <iostream>

using namespace std;

int main(){
    char x;
    cin >> x;
    
    int i = 97;
    do{
    	printf("%c ", i);
    	i++;
	} while((int)x >= i);
}
#include <iostream>

using namespace std;

int main(){
    int min, score;
    cin >> min >> score;
    
    while(min < 90){
    	min += 5;
    	score++;
	}
	cout << score;
}
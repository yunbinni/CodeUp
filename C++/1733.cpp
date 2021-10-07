#include <iostream>

using namespace std;

int main(){
	char word[100];
	cin >> word;
	
	if(word[0]=='I' && word[1]=='O' && word[2]=='I' && word[3]=='\0')
		cout << "IOI is the International Olympiad in Informatics.";
	else
		cout << "I don't care.";
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char S1[21];
	char S2[21];
	char S3[21];
	
	cin >> S1;
	cin >> S2;
	cin >> S3;
	
	if(S1[strlen(S1)-1]==S2[0] && S2[strlen(S2)-1]==S3[0] && S3[strlen(S3)-1]==S1[0]){
		cout << "good";
	} else{
		cout << "bad";
	}
}
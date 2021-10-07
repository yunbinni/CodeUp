#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	char name[n][10];
	int score[n];
	int rank[n];
	
	for(int i = 0; i < n; i++){
		cin >> name[i] >> score[i];
		rank[i] = 1; 
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(score[i] < score[j]){
				rank[i]++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(rank[i]==3)
			cout << name[i];
	}
}
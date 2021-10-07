#include <iostream>

using namespace std;

int main(){
	int N, cnt;
	cin >> N;
	int arr[N-1];
	for(int i = 0; i < N-1; i++){
		cin >> arr[i];
	}
	
	for(int j = 1; j <= N; j++){
		cnt = 0;
		for(int i = 0; i < N-1; i++){
			cnt++;
			if(j==arr[i]){
				cnt = 0;
				break;
			}
		}
		if(cnt==N-1){
			cout << j;
			break;
		}
	}
}
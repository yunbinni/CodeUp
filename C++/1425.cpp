#include <iostream> 
#include <limits.h>

using namespace std;

int main(){
	int N, C, tmp, idx;
	cin >> N >> C;
	int arr[N];
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	
	// 선택정렬 
	for(int i = 0; i < N; i++){
		int min = INT_MAX;
		for(int j = i; j < N; j++){
			if(arr[j] < min){
				min = arr[j];
				idx = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}
	
	for(int i = 0; i < N; i++){
		if(i%C==0 && i > 0)
			cout << endl;
		cout << arr[i] << " ";
	}
}
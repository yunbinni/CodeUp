#include <iostream>

using namespace std;

int main() {
	int N, M;
	int arr[10000001] = {};
	int num;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[num] = 1;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		scanf("%d", &num);
		printf("%d ", arr[num]);
	}
}
#include <iostream>

using namespace std;

int main(){
	int arr[100][100] = { 0, }, r = 0, c = -1, direct = 1, lim = 0, n, m;
	cin >> n >> m;
	
	// �Էº� 
	for(int cnt = 1; cnt <= n * m; ) {
		// ���� ä��� 
		for(int i = 0; i < m - lim; i++) {
			c += direct;
			arr[r][c] = cnt++;
		}
		
		// ���� ä���
		for(int j = 0; j < n - 1 - lim; j++) {
			r += direct;
			arr[r][c] = cnt++;
		}
		
		// ���� �ٲٱ�
		direct *= -1;
		
		// ���Ѱ� ����
		lim++;
	}

	// ��º�
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++){
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
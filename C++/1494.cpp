#include <iostream>

using namespace std;

int main(){
    int n, k, s, e, u, sum = 0, i;
    cin >> n >> k;
    int arr[n];
    for(i = 0; i < n; i++) {
        arr[i] = 0;
    }
    
    for(i = 0; i < k; i++) {
        cin >> s >> e >> u;
        arr[s - 1] += u;
        arr[e] -= u;
    }
    
    // Ãâ·Â
    for(i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for(i = 0; i < n; i++) {
        sum += arr[i];
        cout << sum << ' ';
    }
}
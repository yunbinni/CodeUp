#include <iostream>

using namespace std;

int main(){
    int arr[5] = {400, 340, 170, 100, 70};
    
    int i, j;
    cin >> i >> j;
    
    if(arr[i - 1] + arr[j - 1] > 500) cout << "angry";
    else cout << "no angry";
}
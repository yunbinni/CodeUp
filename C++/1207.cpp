#include <iostream>

using namespace std;

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    
    switch(arr[0] + arr[1] + arr[2] + arr[3]){
        case 1:
            cout << "도";
            break;
        case 2:
            cout << "개";
            break;
        case 3:
            cout << "걸";
            break;
        case 4:
            cout << "윷";
            break;
        default:
            cout << "모";
            break;
    }
}
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    int i = 1;
    
    while(1){
        sum += i;
        if(sum >= n) break;
        i++;
    }
    
    cout << i;
}
#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(90 <= a && a <= 100) cout << "A";
    else if(70 <= a && a < 90) cout << "B";
    else if(40 <= a && a < 70) cout << "C";
    else cout << "D";
}
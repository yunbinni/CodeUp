#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(30 <= n && n <= 40 || 60 <= n && n <= 70) cout << "win"; // and�� or���� �켱
    else cout << "lose";
}
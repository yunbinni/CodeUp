#include <iostream>

using namespace std;

int main(){
    int n, m;
    
    int count = 0;
    
    cin >> n;
    
    reload:
    count++;
    cin >> m;
    cout << m << endl;
    if(count != n) goto reload;
}
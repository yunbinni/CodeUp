#include <iostream>

using namespace std; 

int main(){
    int y, m, d;
    cin >> y >> m >> d;
    int concls = y + m + d;
    if(concls/100%2==0) cout << "���";
    else cout << "�׷�����";
}
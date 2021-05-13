#include <iostream>

using namespace std;

int main(){
    char x;
    reload:
    cin >> x;
    cout << x << endl;
    if(x != 'q') goto reload;
    return 0;
}
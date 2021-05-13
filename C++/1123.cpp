#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float d;
    cin >> d;
    cout << fixed << setprecision(3) << (9.0 / 5.0 * d + 32); // 9.0, 5.0으로 맞춰줘야 함
}
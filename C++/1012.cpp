#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x;
    cin >> x;
    // 소수점 아래자릿수 맞추기
    cout << fixed << setprecision(6) << x;
}
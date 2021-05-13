#include <iostream>

using namespace std;

int main(){
    long long int h, b, c, s;
    cin >> h >> b >> c >> s;
    
    double MB = (h*b*c*s);
    
    printf("%.1lf MB", MB/(8*1024*1024)); // 여기에 나눠줘야 소수점 아래가 유효
}
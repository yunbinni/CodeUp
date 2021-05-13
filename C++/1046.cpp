#include <iostream>

using namespace std;

int main(){
    long a, b, c;
    cin >> a >> b >> c;
    
    long sum = a + b + c;
    
    printf("%d\n", sum);
    printf("%.1f", (float)sum / 3);
}
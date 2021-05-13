#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    
    if(b != 0){
        printf("%d\n", a / b);
        printf("%d\n", a % b);
        printf("%.02f\n", (float)a / (float)b);
    }
    return 0;
}
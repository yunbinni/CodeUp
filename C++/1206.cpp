#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(b%a==0) printf("%d*%d=%d", a, b/a, b);
    else if(a%b==0) printf("%d*%d=%d", b, a/b, a);
    else printf("none");
}
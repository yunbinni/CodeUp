#include <iostream>

using namespace std;

int main(){
	int a, b;
	std::cin >> a >> b;
	if(a || b) std::cout << 1 << std::endl;
	else std::cout << 0 << std::endl;
}
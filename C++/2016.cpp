#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void)
{
	// 입력 및 초기화
	int n;
	string number;
	stack<char> stack;
	
	cin >> n >> number;
	
	for(int i = 0; i < n; i++)
	{
		if(i != 0 && i % 3 == 0)
			stack.push(',');
		stack.push(number[n - 1 - i]);
	}
	
	while(!stack.empty())
	{
		cout << stack.top();
		stack.pop();
	}
}

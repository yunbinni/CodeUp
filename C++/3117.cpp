// STL을 이용한 풀이 

#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	// 입력부 
	int K, input, sum = 0, i;
	stack<int> stack;
	
	scanf("%d", &K);
	
	// 계산부 
	for(i = 0; i < K; i++)
	{
		std::cin >> input;
		
		// 입력값이 0이 아니면 Push 
		if(input != 0)
			stack.push(input);
			
		// 입력값이 0이면 Pop
		else
			stack.pop(); 
	}
	
	while(!stack.empty())
	{
		sum += stack.top();
		stack.pop();
	}
		
	// 출력부
	std::cout << sum << std::endl;
	
	return 0;
}

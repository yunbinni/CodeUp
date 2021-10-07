// STL�� �̿��� Ǯ�� 

#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	// �Էº� 
	int K, input, sum = 0, i;
	stack<int> stack;
	
	scanf("%d", &K);
	
	// ���� 
	for(i = 0; i < K; i++)
	{
		std::cin >> input;
		
		// �Է°��� 0�� �ƴϸ� Push 
		if(input != 0)
			stack.push(input);
			
		// �Է°��� 0�̸� Pop
		else
			stack.pop(); 
	}
	
	while(!stack.empty())
	{
		sum += stack.top();
		stack.pop();
	}
		
	// ��º�
	std::cout << sum << std::endl;
	
	return 0;
}
